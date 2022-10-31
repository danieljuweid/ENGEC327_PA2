#include "pa2Functions.h"
#include <iostream>
#include <cstring>
#include <cmath>
#include <stdlib.h>
#include <ctime>
#include <fstream>
using namespace std;

extern const int ENTRIES = 10;

void initialize()
{
    cout << "EC327: Introduction to Software Engineering" << endl;
    cout << "Fall 2022" << endl;
    cout << "Programming Assignment 2" << endl;
    cout << "Value of Entries is: " << ENTRIES << endl;
}

void writeDataToFile(const char *file)
{
    char code;
    int input1;
    double input2;
    bool exit = false;
    ofstream outdata;
    outdata.open(file);
    do
    {
        cout << "Please enter command code" << endl;
        cin >> code;
        if (checkCode(code) == false)
        {
            cout << "Invalid Command Code" << endl;
        }
        else if (code == 'Q' || code == 'q')
        {
            exit = true;
        }
        else
        {
            cout << "Enter command parameters: ";
            switch (code)
            {
            
            case 'f': case 'F':
                cin >> input1;
                cout << factorial(input1) << endl;
                outdata << factorial(input1) << endl;
                break;
            case 'b': case 'B':
                cin >> input1;
                cout << fibonacci(input1) << endl;
                outdata << fibonacci(input1) << endl;
                break;
            case 'r': case 'R':
                cin >> input2;
                cout << findSqrtValue(input2) << endl;
                outdata << findSqrtValue(input2) << endl;
                break;
            case 'u': case 'U':
                cin >> input2;
                cout << areaSquare(input2) << endl;
                outdata << areaSquare(input2) << endl;
                break;
            case 'c': case 'C':
                cin >> input2;
                cout << areaCircle(input2) << endl;
                outdata << areaCircle(input2) << endl;
                break;
            case 'e': case 'E':
                cin >> input1;
                cout << findNextEvenValue(input1) << endl;
                outdata << findNextEvenValue(input1) << endl;
                break;
            case 'k': case 'K':
                cin >> input2;
                cout << lucky(input2) << endl;
                outdata << lucky(input2) << endl;
                break;
            case 's': case 'S':
            case 'n': case 'N':
            case 'x': case 'X':
                cin >> input2;
                cout << doMath(input2, code) << endl;
                outdata << doMath(input2, code) << endl;
                break;
                case 'l': case 'L':
                cin >> input2;
                cout << naturalLog(input2) << endl;
                outdata << naturalLog(input2) << endl;
                break;
            case 'y': case 'Y':
                cin >> input2;
                cout << findNyanCatValue(input2) << endl;
                outdata << findNyanCatValue(input2) << endl;
                break;
            case 'd': case 'D':
                cin >> input1;
                cout << findNextOddValue(input1) << endl;
                outdata << findNextOddValue(input1) << endl;
                break;
            case 'o': case 'O':
                break;
            }
        }
    } while (exit == false);
    outdata.close();
}

void readDataFromFile(const char *file)
{
    char code;
    int input1;
    double input2;
    bool exit = false;
    string line;
    ifstream indata(file);
    indata.open(file);
    do
    {
        getline(indata,line);
        indata >> code;
        cout << "Please enter command code" << endl;
        cout << code << endl;
        if (checkCode(code) == false)
        {
            cout << "Invalid Command Code" << endl;
        }
        else if (code == 'Q' || code == 'q')
        {
            exit = true;
        }
        else
        {
            cout << "Enter command parameters: ";
            switch (code)
            {
            case 'f': case 'F':
                indata >> input1;
                cout << input1 << endl;
                cout << factorial(input1) << endl;
                break;
            case 'b': case 'B':
                indata >> input1;
                cout << input1 << endl;
                cout << fibonacci(input1) << endl;
                break;
            case 'u': case 'U':
                indata >> input2;
                cout << input2 << endl;
                cout << areaSquare(input2) << endl;
                break;
            case 'c': case 'C':
                indata >> input2;
                cout << input2 << endl;
                cout << areaCircle(input2) << endl;
                break;
            case 'e': case 'E':
                indata >> input1;
                cout << input1 << endl;
                cout << findNextEvenValue(input1) << endl;
                break;
            case 'k': case 'K':
                indata >> input2;
                cout << input2 << endl;
                cout << lucky(input2) << endl;
                break;
            case 's': case 'S': case 'n': case 'N': case 'x': case 'X':
                indata >> input2;
                cout << input2 << endl;
                cout << doMath(input2, code) << endl;
                break;
            case 'l': case 'L':
                indata >> input2;
                cout << input2 << endl;
                cout << naturalLog(input2) << endl;
                break;
            case 'i': case 'I':
                break;
            case 'o': case 'O':
                break;
            case 'y': case 'Y':
                indata >> input2;
                cout << input2 << endl;
                cout << findNyanCatValue(input2) << endl;
                break;
            case 'd': case 'D':
                indata >> input1;
                cout << input1 << endl;
                cout << findNextOddValue(input1) << endl;
                break;

            }
        }
    } while (exit == false);

}

bool checkCode(char code)
{
    bool output;
    if (code == 'F' || code == 'f' || code == 'B' || code == 'b' || code == 'R' || code == 'r' || code == 'U' || code == 'u' || code == 'C' || code == 'c' || code == 'E' || code == 'e' || code == 'K' || code == 'k' || code == 'S' || code == 's' || code == 'N' || code == 'n' || code == 'X' || code == 'x' || code == 'L' || code == 'l' || code == 'Y' || code == 'y' || code == 'D' || code == 'd' || code == 'I' || code == 'i' || code == 'O' || code == 'o' || code == 'Q' || code == 'q')
    {
        output = true;
        return output;
    }
    else
    {
        output = false;
        return output;
    }
}

int factorial(int input)
{
    int output = 1;
    for (int i = 1; i <= input; i++)
    {
        output = output * i;
    }
    return output;
}

int fibonacci(int input)
{
    int term1 = 0;
    int term2 = 1;
    int next = 0;
    if (input == 1)
    {
        return term1;
    }
    else if (input == 2)
    {
        return term2;
    }
    else
    {
        for (int i = 1; i <= input; i++)
        {
            next = term1 + term2;
            term1 = term2;
            term2 = next;
        }
    }
    return next;
}

double findSqrtValue(double input)
{
    return sqrt(input);
}

double naturalLog(double input)
{
    return log(input);
}

double areaCircle(double input)
{
    return (input * input) * 6.28;
}

double areaSquare(double input)
{
    return input * input;
}

double doMath(double input, char code) 
{
    switch (code)
    {
    case 'n': case 'N':
        return cos(input);
    case 'x': case 'X':
        return exp(input);
    case 's': case 'S':
        return sin(input);
    }
    return 0;
}

int findNextOddValue(int input)
{
    if (input % 2 == 0)
        return input + 1;
    else
        return input + 2;
}

int findNextEvenValue(int input)
{
    if (input % 2 == 0)
        return input + 2;
    else
        return input + 1;
}

double findNyanCatValue(double input)
{
    return (pow((4 * input), input) + input + 10);
}

double lucky(double input)
{
    srand(time(NULL));
    double output = rand() * input;
    return output;
}