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
int Calculator::calculate()
{
    while(userInput[0] != 'q' || 'Q') // Checks for user input "Quit" or "quit"
    {
        
        int stringSize;
        std::cin >> userInput;      // User Input
    
        stringSize = userInput.length();
        int y = 0;
        while (y < stringSize)
        {
            if (isdigit(userInput[y]))
            {}
            else
            {
                posi = y;
            }
            y++;
        }
        first = userInput.substr(0,posi);
        second = userInput.substr(posi+1,y);
        finalNum1 = std::stoi(first);       // Sigbart error
        finalNum2 = std::stoi(second);
        
        
        switch (userInput[posi])
        {
            case '+':
                std::cout << finalNum1 + finalNum2;
                break;
                
            case '-':
                std::cout << finalNum1 - finalNum2;
                break;
                
            case '*':
                std::cout << finalNum1 * finalNum2;
                break;
                
            case '/':
                std::cout << finalNum1 / finalNum2;
                break;
                
            case '%':
                std::cout << finalNum1 % finalNum2;
                break;
        }

        
       
    }
    return 0;
}

