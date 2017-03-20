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
int Calculator::setupInput()
{
    int stringSize;

    

    std::cin >> userInput;
   // std::cout << userInput << std::endl;
    
    stringSize = userInput.length();
    int y = 0;
    while (y < stringSize)
    {
        if (isdigit(userInput[y]))
        {

        }
        else
        {
            posi = y;
        }
        y++;
    }
  //  std::cout << "Position : " << posi << std::endl;
    first = userInput.substr(0,posi);
    second = userInput.substr(posi+1,y);
    finalNum1 = std::stoi(first);
    finalNum2 = std::stoi(second);
   // std::cout <<"This: " << typeid(finalNum1).name();
    
    
    
    return 0;
}


void Calculator::performingOperator()
{
    while(1)
    {
        switch (userInput[posi]) {
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

}
