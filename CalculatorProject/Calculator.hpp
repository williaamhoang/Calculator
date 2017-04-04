//
//  Calculator.hpp
//  CalculatorProject
//
//  Created by William Hoang on 3/20/17.
//  Copyright © 2017 COSC 1430. All rights reserved.
//

#ifndef Calculator_hpp
#define Calculator_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Calculator
{
public:
    std::string first;
    std::string second;
    std::string userInput; 
    int posi;
    int finalNum1;
    int finalNum2;
    
    
    int calculate();    
};


#endif /* Calculator_hpp */
