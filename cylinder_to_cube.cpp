// Author: Jim Crawford
// Date: 9/19/2023
// Name: Main.cpp
// Purpose: Write a program that prompts the user to input:
// The radius of the base of a cylindrical container.
// The height of the cylindrical container.
// The program then outputs:
// The side of the cube with the same volume as the cylindrical container
// with a precision of 2 decimal places.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {

    // Declaring Variables
    double cylindricalHeight, cylindricalRadius, cubeVolume;
    double cubeRoot;
    const float PI = 3.141593;

    // Take in user input
    cout << "Input the cylindrical Radius: ";
    cin >> cylindricalRadius;
    cout << "Input the cylindrical Height: ";
    cin >> cylindricalHeight;

    // Calculating the side of the cube from its volume
    cubeVolume = PI * (cylindricalRadius * cylindricalRadius) * cylindricalHeight;

    cubeRoot = cbrt(cubeVolume);

    // Set output to precision of 2 decimal places.
    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << cubeRoot;

    return 0;
}
