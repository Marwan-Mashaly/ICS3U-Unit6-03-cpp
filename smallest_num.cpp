// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: December 2019
// This program finds the smallest number in the list of numbers given

#include <time.h>
#include <iostream>
#include <array>


template<size_t N>
int SmallestNumber(std::array<int, N> listOfNumbers) {
    // this functions add up all the numbers in the list

    int smallest = listOfNumbers[0];

    for (int counter : listOfNumbers) {
        if (counter < smallest) {
            smallest = counter;
        }
    }
    return smallest;
}


main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int smallest = 0;

    srand(time(NULL));

        std::cout << "The numbers are: ";
        for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
            aSingleRandomNumber = (rand() % 10) + 1;
            randomNumbers[loop_counter] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << " " << std::endl;

        smallest = SmallestNumber(randomNumbers);

        std::cout << "The smallest number is: " << smallest << std::endl;
}
