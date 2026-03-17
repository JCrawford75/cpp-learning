// Author: Jim Crawford
// Date: 10/10/2024
// Name: Main.cpp
// Program: Sentinel-Controlled Loop, changed into EOF-controlled loop.
// This program computes and outputs the total number of boxes of cookies sold,
// the total revenue, and the average number of boxes sold by each volunteer.

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    string name;

    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;

    double costOfOneBox;

    // add data stream variable for change to EOF loop
    ifstream inFile;

    // Open the data file
    inFile.open("ch5_Ex18Data.txt");

    cout << fixed << showpoint << setprecision(2);

    totalNumOfBoxesSold = 0;
    numOfVolunteers = 0;

    // Add New EOF-Controlled Loop
    inFile >> costOfOneBox;
    inFile >> name >> numOfBoxesSold;

    while (inFile)
    {
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        numOfVolunteers++;

        inFile >> name >> numOfBoxesSold;
    }

    cout << endl;

    cout << "The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;

    cout << "The total money made by selling cookies: $"
         << totalNumOfBoxesSold * costOfOneBox << endl;

    if (numOfVolunteers != 0)
        cout << "The average number of boxes sold by each volunteer: "
             << totalNumOfBoxesSold / numOfVolunteers << endl;
    else
        cout << "No input." << endl;

    inFile.close();

    return 0;
}
