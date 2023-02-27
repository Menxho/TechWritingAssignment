# TechWritingAssignment
## Code

include iostream
include fstream
include iomanip
include string
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

  ## Wriiten Document
The objective of this lab is to write a C++ program that reads data from a file, performs a calculation, and outputs the results to another file. The program is designed to help a company to calculate the new salary of each employee after a pay increase. This lab aims to test the student's understanding of file input/output, string manipulation, and basic arithmetic calculations.


The program starts by declaring variables to hold the employee's first name, last name, current salary, percent pay increase, and updated salary. It then creates input/output files using the ifstream and ofstream classes. The program opens the input file and reads data from it using a while loop. Inside the loop, it calculates the updated salary using the formula uSalary = cSalary * (1 + (pI / 100)) and outputs the result to the console and the output file using cout and outFile respectively. Finally, the program closes the input.


 The program reads data from the Data.txt file. The data consists of four columns separated by spaces - employee's last name, first name, current salary, and percent pay increase. And, the program outputs the results to the console and the Output.dat file. For each employee, the program outputs the first name, last name, and updated salary in a formatted manner. The decimal numbers are formatted to two decimal places, right-justified and each number is located in a total of 12 positions.
 
 
The data flow of this program is:
1.	Declare variables to hold employee data
2.	Create input/output files
3.	Open input/output files
4.	Read data from input file using a while loop
5.	Calculate updated salary using formula uSalary = cSalary * (1 + (pI / 100))
6.	Output results to console and output file
7.	Close input/output files
8.	Return 0


 The program uses file input/output methods to read data from the input file and write results to the output file. It also uses string manipulation functions to store the employee's first and last name. The program uses string variables to hold the employee's first and last name, and float variables to hold the current salary, percent pay increase, and updated salary. The program calculates the updated salary using the formula uSalary = cSalary * (1 + (pI / 100)). The program outputs the first name, last name, and updated salary for each employee to the console and the Output.dat file. The results are formatted as specified in the lab instructions.
From this lab, I learned how to read data from a file, perform calculations, and output the results to another file. I also learned how to use string manipulation functions to store and output the employee's first and last name. Additionally, I learned how to format decimal numbers using setw, right, fixed, and setprecision functions and how actually looping works. One recommendation to improve the program would be to add error handling for cases where the input file does not exist or contains invalid data. Another recommendation would be to add more comments to the code to improve its readability.


