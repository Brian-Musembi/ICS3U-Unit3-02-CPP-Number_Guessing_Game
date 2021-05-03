// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 03 May 2021
// This program allows the user to guess the correct number

#include <iostream>

int main() {
    // this function allows the user to guess the correct number
    const int answer = 5;
    int guess;

    // input
    std::cout << "Enter a number between 0 - 9: ";
    std::cin >> guess;

    // process
    if (guess == answer) {
            // output
            std::cout << "You guessed correct!";}
    // process
    if (guess != answer) {
            // output
            std::cout << "You guessed wrong!";}
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
