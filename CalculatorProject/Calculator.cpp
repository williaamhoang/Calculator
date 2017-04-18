//
//  Calculator.cpp
//  CalculatorProject
//
//  Created by William Hoang on 3/20/17.
//  Copyright © 2017 COSC 1430. All rights reserved.
//

#include "Calculator.hpp"
#include <cctype>
#include <sstream>
#include <typeinfo>
#include <ostream>
#include <fstream>
using namespace std;
int Calculator::calculate()
{
    cin >> userInput;
    if (userInput[0] != 'q' || 'Q')
    {
        stringSize = userInput.length();
        int y = 0;
        int x = 0;
        while (y < stringSize)
        {
            if (isdigit(userInput[y]))
            {
                x++; // bs code
            }
            else
            {
                posi = y;   //Position of the operator
            }
            y++;
        }
        first = userInput.substr(0,posi);
        second = userInput.substr(posi+1,y);
        finalNum1 = std::stoi(first);       // user input to integer
        finalNum2 = std::stoi(second);      // user input to integer

        switch (userInput[posi])
        {
            case '+':
                std::cout << "=" <<  finalNum1 + finalNum2 << endl;
                break;
                
                
            case '-':
                std::cout << "=" << finalNum1 - finalNum2 <<endl;
                break;
                
            case '*':

                cout << "=" << finalNum1 * finalNum2 << endl;
                break;

                
            case '/':
                std::cout << "=" <<  finalNum1 / finalNum2 << endl;
                break;
                
            case '%':
                std::cout <<  "=" << finalNum1 % finalNum2 << endl;
                break;
        }
        cout << endl;
        
       
    }
    
    else
        std::cout << "Goodbye";
    return 0;
}

