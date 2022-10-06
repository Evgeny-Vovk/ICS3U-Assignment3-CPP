// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Assignment3.cpp File, 3X+1 problem in C++.


int main() {
    // creating variables
    int number;
    int step;

    // input
    std::cout << "Type in any number that you want to see go through the 3X + 1 loop: ";
    std::cin >> number;
    if (number < 1) {
        std::cout << "\nYou can only use positives for 3X+1 problem.\n";
        exit (EXIT_FAILURE);
    }

    // process and output
    while (number > 1) {
        if (number % 2) {
            std::cout << number << " × 3 + 1 = ";
            number = number * 3 + 1;
            std::cout << number;
        }
        else {
            std::cout << number << " : 2 = ";
            number = number / 2;
            std::cout << number;
        }
        step += 1;
        std::cout << "\nstep #" << step << ".\n\n";
    }
    std::cout << "\nThe number has stopped on the 1 and 2 infinity loop.";
    std::cout << "\n(1×3+1=4, 4:2=2, 2:2=1)";

    std::cout << "\n\nDone.\n";
    exit (EXIT_SUCCESS);
}
