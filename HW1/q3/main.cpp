#include <iostream>
using namespace std;

bool isOperator(char c) {
    return c == '*' || c == '/' || c == '+' || c == '-';
}

bool isValid(string s) {
    /* Check that input is valid (only numbers and operators) */
    for (int i = 0; i < s.length(); i++) {
        if (!(isOperator(s[i]) || isnumber(s[i]))) return false;
    }

    /* Check for two operators next to each other */
    for (int i = 0; i < s.length() - 1; i++) {
        if (isOperator(s[i]) && isOperator(s[i + 1])) return false;
    }

    // If input string is empty or any of the edge characters are operators, return false. Else true
    return !(s.length() == 0 || isOperator(s[0]) || isOperator(s[s.length() - 1]));
}

/* Check if the input is already an integer */
bool alreadySolved(string input) {
    for (int i = 0; i < input.length(); i++) {
        if (isOperator(input[i])) return false;
    }

    return true;
}

/* Check if the operator in question exists */
bool noOperator(string input, char o) {
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == o) return false;
    }

    return true;
}

/* Does the operation between a and b */
int doOperation(int a, int b, char o) {
    switch(o) {
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '+':
            return a + b;
        case '-':
            return a - b;
    }

    return -1;
}


/* O(N) time w/out Stack: Main method that simplifies my equation */
string simplify(string input, char o) {
    if (alreadySolved(input) || noOperator(input, o)) return input;

    string output = "";
    string firstNum = "";
    string secondNum = "";
    int index = 0;
    int answer = 0;
    int first = -1;
    int second = -1;

    while (index < input.length()) {
        char c = input[index];

        if (!isOperator(c)) {
            if (first != -1) {
                secondNum += c;
            }
            else {
                firstNum += c;
            }
        }

        else {
            if (c != o) {
                if (first == -1) {
                    output += (firstNum + c);
                    firstNum = "";
                }
                else {
                    second = stoi(secondNum);
                    first = doOperation(first, second, o);
                    output += (to_string(first) + c);
                    first = -1;
                    second = -1;
                    firstNum = "";
                    secondNum = "";
                }
            }

            else {
                if (first == -1) {
                    first = stoi(firstNum);
                }
                else {
                    second = stoi(secondNum);
                    first = doOperation(first, second, o);
                    secondNum = "";
                }
            }
        }

        index++;
    }

    if (secondNum.length() > 0) {
        second = stoi(secondNum);
        output += to_string(doOperation(first, second, o));
        return output;
    }

    return output + firstNum;
}

string solve(string input) {
    input = simplify(input, '/');
    cout << "After Dividing: " << input << endl;
    input = simplify(input, '*');
    cout << "After Multiplying: " << input << endl;
    input = simplify(input, '-');
    cout << "After Subtracting: " << input << endl;
    cout << "After Adding (SOLUTION): ";
    return simplify(input, '+');
}

int main() {
    string input;
    cout << "Please enter in your equation: ";
    cin >> input;

    /* IF INPUT IS BAD */
    if (input[0] == '\"' || input[0] == '\'') {
      cout << "Please don't include any quotation marks in your input";
      return 0;
    }
    if (!isValid(input)) return 0;

    /* SOLVE */
    cout << solve(input);

    return 0;
}
