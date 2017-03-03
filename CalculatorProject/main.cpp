#include <string>
#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

void checkInput(string);
void returnResult(string, string, string);

int main() {
    string userInput;
    while(1) {
        cout << "Enter Here => ";
        cin >> userInput;
        if (userInput == "quit" || userInput == "QUIT" || userInput == "exit" || userInput == "EXIT") {
            cout << "Bye-bye!" << endl;
            exit(0);
        }
        checkInput(userInput);
    }
    return 0;
}

void checkInput(string str) {
    int length = str.length();
    string first = "", second = "", arithOperator = "";
    for (int i = 0; i < length; i++) {
        if(isdigit(str[i]) || str[i] == '.') {
            second += str[i];
        } else {
            arithOperator += str[i];
            first = second;
            second = "";
        }
    }
    returnResult(first, second, arithOperator);
}

void returnResult(string first, string second, string arithOperator) {
    double numFirst = stod(first.c_str()), numSecond = stod(second.c_str());
    if (arithOperator == "+")
        cout << first + arithOperator + second << "=" << numFirst + numSecond << endl;
    else if (arithOperator == "/")
        cout << first + arithOperator + second << "=" << numFirst / numSecond << endl;
    else if (arithOperator == "*")
        cout << first + arithOperator + second << "=" << numFirst * numSecond << endl;
    else if (arithOperator == "-")
        cout << first + arithOperator + second << "=" << numFirst - numSecond << endl;
    else if (arithOperator == "%")
        cout << first + arithOperator + second << "=" << remainder(numFirst, numSecond) << endl;
}
