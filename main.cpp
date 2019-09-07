#include <iostream>
#include <ctime>
#include <stdlib.h>
#include<bits/stdc++.h>

int main(){
    std::srand(std::time(nullptr)); //generates a random seed using current time

    int maxRange{100};
    int randomIntToGuess{std::rand() % maxRange + 1};
    int userGuess{0};
    //std::cout << randomIntToGuess << std::endl; //debugging lol
    std::cout << "Guess my number (1 - " << maxRange << ")\n";

    //this checks the input, if it's not an int - it'll throw an "Invaild Input" message
    while(userGuess != randomIntToGuess){
        if(!(std::cin >> userGuess)){
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Invalid Input\n";
        }
        std::cout << "Try again!\n";
    }
    std::cout << "\033[2J\033[1;1H You got it right!\n";
    //GNU/Linux ANSI Esacpe code to clear the screen when the input is correct!

    return 0;

}


    //std::cin >> userGuess;

    /*
    if (userGuess == randomIntToGuess){
        std::cout << "YOU GUESSES IT CORRECT\n";
    } else {
        std::cout << "Try again\n";
    }
    */ //this code exits when they either get it wrong or right

    /*
    while(userGuess != randomIntToGuess){
        std::cout << "Try again!\n";
        std::cin >> userGuess;
    }
    std::cout << "You got it right!\n";
    */
