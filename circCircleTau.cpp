// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: September 28, 2023
// This program calculates the circumference of a circle with user input

#include <cmath>
#include <iostream>

int main() {
    // declare the radius and TAU
    float radius, circumference, roundedCircumference;
    const float TAU = M_PI * 2;

    // get the radius
    std ::cout << "Circumference of a Circle" << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference
    circumference = TAU * radius;
    roundedCircumference = round(circumference * 100.0) / 100.0;

    // display the circumference
    std ::cout << "C = " << roundedCircumference << "cm" << std::endl;
}
