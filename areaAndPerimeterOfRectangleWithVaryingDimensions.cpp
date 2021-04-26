// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program calculates area and perimeter of a rectangle
//    with dimensions inputted by user

#include <iostream>

int main() {
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of rectangle in mm: ";
    std::cin >> length;
    std::cout << "Enter width of rectangle in mm: ";
    std::cin >> width;

    // process
    area = length * width;
    perimeter = 2 * (length + width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is: " << area << "mm²" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Perimeter is: " << perimeter << "mm" << std::endl;
}
