#include <iostream>
#include <stack>
#include <string>
using namespace std;

string removeUnbalancedParentheses(string s) {
    stack<int> openParentheses;
    stack<int> closeParentheses;

    // Traverse the string and use the stack to find unbalanced parentheses
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            openParentheses.push(i);
        } else if (s[i] == ')') {
            if (!openParentheses.empty()) {
                openParentheses.pop(); // Match found, pop the corresponding '('
            } else {
                closeParentheses.push(i); // Unmatched ')'
            }
        }
    }

    // All remaining indexes in openParentheses and closeParentheses are unbalanced
    while (!openParentheses.empty()) {
        s.erase(openParentheses.top(), 1);
        openParentheses.pop();
    }

    while (!closeParentheses.empty()) {
        s.erase(closeParentheses.top(), 1);
        closeParentheses.pop();
    }

    return s;
}

int main() {
    string input1 = "((abc)((de))";
    string input2 = "(((ab)";

    cout << "Input  : " << input1 << endl;
    cout << "Output : " << removeUnbalancedParentheses(input1) << endl;

    cout << "Input  : " << input2 << endl;
    cout << "Output : " << removeUnbalancedParentheses(input2) << endl;

    return 0;
}
