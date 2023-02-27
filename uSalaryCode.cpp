/*
 CS231-004
 Programming Project 2
 Mishan Parajuli
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    // Declaring Variables
    string fName, lName;
    float cSalary, pI, uSalary;

    // Creating Input/Output Files
    ifstream inFile;
    ofstream outFile;

    // Opening Files
    inFile.open("/Users/mparajuli/Desktop/Mishan/C++/ProgrammingProject2_Mishan/ProgrammingProject2_Mishan/Data.txt");
    outFile.open("/Users/mparajuli/Desktop/Mishan/C++/ProgrammingProject2_Mishan/ProgrammingProject2_Mishan/Output.dat");

    // Reading From The Given File
    while( inFile >> lName >> fName >> cSalary >> pI){
       // Calculating
       uSalary = cSalary * (1 + (pI / 100));
       // Printing Result
       cout << fName << " " << lName << " " << uSalary <<endl;
       outFile << fName << " " << lName << " " << setw(12) << right << fixed << setprecision(2) << uSalary << endl;
    }
    // Closing Input and Output Files
    inFile.close();
    outFile.close();

    return 0;
}

