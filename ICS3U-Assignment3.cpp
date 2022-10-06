// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Assignment3.cpp File, 3X+1 problem in C++.

#include <iostream>

int main() {
    // creating variables
    int initialNumber = 0;
    int number = 0;
    int step = 0;

    // input
    std::cout << "Type in any natural number that you want to see go through the 3X + 1 problem: ";
    std::cin >> initialNumber;
    number = initialNumber;

    if (number < 1) {
        std::cout << "\nYou can only use natural numbers for 3X+1 problem.\n";
        exit(EXIT_FAILURE);
    }

    // process and output
    while (number > 1) {
        if (number % 2) {
            std::cout << number << " × 3 + 1 = ";
            number = number * 3 + 1;
        } else {
            std::cout << number << " : 2 = ";
            number = number / 2;
        }
        std::cout << number;
        std::cout << "\nstep #" << ++step << ".\n\n";
    }
    std::cout << "\nThe 3X + 1 problem has been resolved in "
              << step << " steps, starting from number " << initialNumber << ".";

    std::cout << "\n\nDone.\n";
    exit(EXIT_SUCCESS);
}
