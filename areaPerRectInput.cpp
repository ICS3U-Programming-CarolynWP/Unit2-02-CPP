// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/09/22
// Uses user input for the length and width of a
// rectangle and calculates the area and perimeter.
// Displays it back to user.

#include <iostream>

float length;
float width;
float area;
float perim;

int main() {
    std::cout << "Area and perimeter of a rectangle.\n";
    std::cout << "Enter the length here (cm): ";
    std::cin >> length;
    std::cout << "Enter the width here (cm): ";
    std::cin >> width;

    area = length * width;
    perim = 2 * (length + width);

    std::cout << std::endl;
    std::cout << "Your area is = " << area << " cm^2.\n";
    std::cout << "Your perimeter is = " << perim << "cm.\n";
}
