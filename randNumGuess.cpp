// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Layla Michel
// Created on: May 10, 2021
// This program asks the user to input a number between 0 and 9,
// generates a random number and displays a message depending
// on if the guess is the same as the random number or not

#include <iostream>
#include <random>

int main() {
    // declare variables
    int number, correct_guess;

    // get the user guess
    std::cout << "Guess what number I am thinking of between 0 and 9: ";
    std::cin >> number;

    // generate random number
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    correct_guess = idist(rgen);

    // check if guess is correct and display message
    // depending on if it's right or wrong
    if (number == correct_guess) {
        std::cout << "You guessed correctly!\n";
    } else {
        std::cout << "You guessed wrong. The correct answer was: "
        << correct_guess << "\n";
    }
}
