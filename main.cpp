// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Array

#include <iostream>
#include <random>

using std::cout;
using std::endl;

int main() {
    // main function for array

    // stuff for random
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> distr(1, 100);

    // defining variables
    int arr[10];
    int average = 0;

    // create array with 10 random numbers/process
    for (int rand = 0; rand < 10; rand++) {
        arr[rand] = distr(eng);
    }

    // add up arr/process
    for (int num = 0; num < 10; num++) {
        cout << "The random number is: " << arr[num] << endl;
        average += arr[num];
    }

    // output
    cout << endl;
    cout << "The average is " << average / 10.0 << endl;

    // output finished
    cout << endl;
    cout << "Done." << endl;
}
