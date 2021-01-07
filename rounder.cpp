// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on January 2021
// This program removes a specified amount of decimals form a specified number

#include <iostream>
#include <cmath>


void changer(float &number, int roundOffAmount) {
    /* This function removes a specified amount of
    decimals form a specified number */

    number = ((static_cast<int>(number * pow(10, roundOffAmount)))
                 / pow(10, roundOffAmount));
}

main() {
    /* This function gathers inputs and places them into the
    designated functions */

    float numberInput;
    int roundOffAmountInput;

    std::cout << "" << std::endl;

    try {
        std::cout << "" << std::endl;
        std::cout << "Enter a number with decimals: ";
        std::cin >> numberInput;
        std::cout << "" << std::endl;
        std::cout << "Number of decimals removed: ";
        std::cin >> roundOffAmountInput;
        std::cout << "" << std::endl;

        if (roundOffAmountInput > 0) {
            changer(numberInput, roundOffAmountInput);
            std::cout << "The number is " << numberInput << std::endl;
        } else {
            std::cout << "Please input a positive"
                  " round off amount" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter valid integers" << std::endl;
    }
}
