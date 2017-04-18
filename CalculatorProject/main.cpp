#include <iostream>
#include "Calculator.hpp"
using namespace std;


int main()
{

    Calculator calc;
    int i = 0;
    while (i < 10)
    {
        calc.calculate();
    }
    cout.flush();
    return 0;
}


