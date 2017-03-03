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
    
    string input;
    vector<string> first;
    while(1)
    {
        cin >> input;
        for(int j = 0; j < input.size(); j++)
        {
            if((input[j]) == '+')
                ;

            else
            {
                string str = input.substr(j,1);
                first.push_back(str);
            }
        }
        for (int i = 0; i < input.size()-1; i++)
            cout << first[i];
        


    }

    
    return 0;
}

