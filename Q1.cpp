#include "pa2Functions.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    //defining consistent variables throughout sub-functions and main function 
    
    char F; //Factorial value 
    char f; //Fibonacci number 
    char B; //More command code
    char b;
    char R; 
    char r;
    char U; 
    char u;
    char C;
    char c;
    char E;
    char e;
    char K; 
    char k; 
    char S; 
    char s; 
    char N; 
    char n;
    char X;
    char x;
    char L; 
    char l;
    char Y;
    char y; 
    char D; 
    char d; 
    char I; 
    char i; 
    char O; 
    char o; 
    char Q; 
    char q; 
    char code;
    int input1; //Used in sub-functions many times
    double input2; //Used in sub-functions many times 
    bool exit = false;
    char *file;

    initialize();
    do
    {
        cout << "Please enter command code" << endl;
        cin >> code;
        if (checkCode(code) == false)
        {
            cout << "Invalid Command Code" << endl;
        }
        else if (code == 'Q' || code == 'q') //Case q and Q to quit 
        {
            exit = true;
        }
        else
        {
            cout << "Enter command parameters: ";
            switch (code)
            {
            case 'F': case 'f':
            cin >> input1;
            cout << factorial(input1) << endl;
            break;
            case 'b': case 'B':
            cin >> input1;
            cout << fibonacci(input1) << endl;
            break;
            case 'r': case 'R':
            cin >> input2;
            cout << findSqrtValue(input2) << endl;
            break;
            case 'u': case 'U':
            cin >> input2;
            cout << areaSquare(input2) << endl;
            break;
           case 'c': case 'C':
                cin >> input2;
                cout << areaCircle(input2) << endl;
                break;
            case 'e': case 'E':
                cin >> input1;
                cout << findNextEvenValue(input1) << endl;
                break;
            case 's': case 'S':
            case 'n': case 'N':
            case 'x': case 'X':
                cin >> input2;
                cout << doMath(input2, code) << endl;
                break;
            case 'k': case 'K':
                cin >> input2;
                cout << lucky(input2) << endl;
                break;
            case 'l': case 'L':
                cin >> input2;
                cout << naturalLog(input2) << endl;
                break;
             case 'y': case 'Y':
                cin >> input2;
                cout << findNyanCatValue(input2) << endl;
                break;
             case 'd': case 'D':
                cin >> input1;
                cout << findNextOddValue(input1) << endl;
                break;
            case 'i': case 'I':
                cin >> file;
                exit = true;
                readDataFromFile(file);
                break;
            case 'o': case 'O':
                cin >> file;
                exit = true;
                writeDataToFile(file);
                break;
            }
        }
    } while (exit == false);
    return 0;
}

