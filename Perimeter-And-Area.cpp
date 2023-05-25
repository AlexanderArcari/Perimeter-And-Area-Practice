// Perimeter-And-Area.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

using namespace std;

int main()
{
    // Declare Variables 
    double perimeter;
    double area;
    double length;
    double width;

    // Tell user what program does 
    cout << "This program calculates the perimeter and area given a length and width." << endl << endl;

    cout << "Please enter the length and width." << endl;

    // Take user inputs 

    cin >> length >> width; 
    
    cout << endl;

    // Calculate perimeter and area
    perimeter = 2 * (length + width);

    area = length * width;

    // Output Perimeter and Area

    cout << "Perimeter is: " << perimeter << endl << endl;

    cout << "Area is: " << area << endl;

    return 0;

}

