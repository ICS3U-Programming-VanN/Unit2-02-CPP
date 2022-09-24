// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 23th, 2022
// This program calculates and outputs the area and perimeter of a
// rectangle based on the user input.

#include <iostream>

// Initialize Variables
float length, width, area, perimeter;

int main() {
    std::cout << "The program calculates the area ";
    std::cout << "and perimeter of a rectangle.\n";
    // Takes in user input for the length and width
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // Calculates the Area and Perimeter of the rectangle
    area = length * width;
    perimeter = 2 * (length + width);

    // Displays the Area and Perimeter back to the user
    std::cout << "The Area: " << area << "cm^2\n";
    std::cout << "The Perimeter: " << perimeter << "cm\n";
}
