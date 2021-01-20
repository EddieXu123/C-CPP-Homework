#include <iostream>
#include <fstream>
using namespace std;

int rightIndex = 0;

/* Method to reverse a string */
string reverseString(string input) {
    string output;
    for (int i = input.length() - 1; i >= 0; i--) {
        output += input[i];
    }

    return output;
}

bool isOperator(char c) {
    return c == '*' || c == '/' || c == '+' || c == '-';
}

/* Method to solve simple expression: left (operator) right */
int solve(int left, char o, int right) {
    switch(o) {
        case '*':
            return left * right;
        case '/':
            return left / right;
        case '-':
            return left - right;
        case '+':
            return left + right;
    }

    return -1;
}

/* Method to form the number to the left of an operator, in a given string */
string leftTrav(int index, string s) {
    string output = "";
    // Index should start one left of the operator
    for (int i = index; i >= 0; i--) {
        if (!isdigit(s[i])) {
            // Immediately return the string reversed
            return reverseString(output);;
        }
        output += s[i];
    }

    return reverseString(output);;
}

/* Method to form the number to the right of an operator, in a given string */
string rightTrav(int index, string s) {
    string output = "";
    // Index should start one right of operator
    for (int i = index; i < s.length(); i++) {
        if (!isdigit(s[i])) {
            rightIndex = i;
            return output;
        }
        output += s[i];
    }

    rightIndex = s.length() - 1;
    return output;
}

/* For each line of my file, Clean it up */
string cleanLine(string s) {
    string output = "";
    string num = "";
    bool seenOperator = false;
    for (int i = 0; i < s.length(); i++) {

        if (isdigit(s[i]) && i >= rightIndex) {
            num += s[i];
        }

        if (isOperator(s[i])) {
            num = "";
            string left = leftTrav(i - 1, s);
            string right = rightTrav(i + 1, s);
            if (left.length() > 0 && right.length() > 0) {
                seenOperator = true;
                int result = solve(stoi(left), s[i], stoi(right));
                output += to_string(result);
            }
            else {
                output += (left + s[i] + right);
            }

            if (left.length() > 0 || right.length() > 0) seenOperator = true;
        }

        else if (!isdigit(s[i]) && !isOperator(s[i])) {
            if (num.length() != 0 && !seenOperator) {
                output += (num + s[i]);
                num = "";
            }
            else {
                output += s[i];
                seenOperator = false;
            }
        }
    }

    return seenOperator ? output : output + num;
}

int main() {
    fstream output;
    fstream input;
    output.open("question_4_output.txt", ios::out); 
    
    input.open("question_4.txt", ios::in);
    if (input.is_open()) {
        string line;
        while(getline(input, line)){ 
            rightIndex = 0;
            output << cleanLine(line) << "\n"; 
        }
        input.close(); 
    }

    output.close();

    cout << "CHECK THE 'question_4_output.txt' FILE INSIDE 'cmake-build-debug' FOLDER FOR OUTPUT" << endl;
    return 0;
}

