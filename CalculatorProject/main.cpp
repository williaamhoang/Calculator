//
//  main.cpp
//  CalculatorProject
//
//  Created by William Hoang on 3/2/17.
//  Copyright © 2017 COSC 1430. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;




int main(int argc, const char * argv[]) {
    
    string input, first;
    int j = 0;
    while(1)
    {
        cin >> input;
        for(j; j < input.size(); j++)
        {
            if(isdigit(input[j]))
            {
                first = input[j];
                cout << first;
            }
            
            cout << first;
        }

    }

    
    return 0;
}

