// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program, calculating the number guess game

#include <iostream>
#include <random>

int main() {
    // This function comparing the guessed number and answer
    int numberGuess;
    int answerRandom;

    // input
    std::cout << "Enter the number you guess between 0 - 9: ";
    std::cin >> numberGuess;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    answerRandom = idist(rgen);

    std::cout << "" << std::endl;
    if (numberGuess == answerRandom) {
        // output
        std::cout << "Your guess is right!";
    } else {
        std::cout << "Your guess is wrong! The answer is "
        << answerRandom << "." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
