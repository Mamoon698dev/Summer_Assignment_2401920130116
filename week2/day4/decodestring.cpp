#include <iostream>
#include <stack>
#include <string>
using namespace std;

string decodeString(string s) {
    stack<int> countStack;
    stack<string> stringStack;

    string currentString = "";
    int currentNumber = 0;

    for (char ch : s) {

        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        }

        else if (ch == '[') {

            countStack.push(currentNumber);
            stringStack.push(currentString);

            currentNumber = 0;
            currentString = "";
        }

        else if (ch == ']') {

            int repeatCount = countStack.top();
            countStack.pop();

            string previousString = stringStack.top();
            stringStack.pop();

            string repeatedPart = "";

            for (int i = 0; i < repeatCount; i++) {
                repeatedPart += currentString;
            }

            currentString = previousString + repeatedPart;
        }

        else {
            currentString += ch;
        }
    }

    return currentString;
}

int main() {
    string s;
    cout << "Enter encoded string: ";
    cin >> s;
    string result = decodeString(s);
    cout << "Decoded string: " << result << endl;
    return 0;
}