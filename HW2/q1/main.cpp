#include <iostream>
#include "hw2q1.h"
using namespace std;

/*
USE FOR EASIER TESTING (Copy in and press enter):

The answer to Question 1 is...!
5

 */

int main()
{
    int amt, n;
    string str;

    cout << "Please enter your input string: ";
    getline(cin, str);

    cout << "Please enter the amount to shift by (amt): ";
    cin >> amt;

    /* Base case and also helps test for invalid inputs that would be 0 */
    if (amt == 0) {
        cout << "Please enter an integer between 1 and 2^31-1" << endl;
        cout << "String (no shift): " << str;
        return 0;
    }

    if (!(1 <= amt && amt <= INT_MAX)) {
        cout << "Please enter an integer between 1 and 2^31-1" << endl;
        return 0;
    }

    codeCipher(amt % 26, &str[0], str.length());
    cout << "\nOutput: " << str;
    return 0;
}


void codeCipher(const int amt, char* str, int n) {
    for (int i = 0; i < n; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {      
            /* If it doesn't wrap around */
            if ('z' - str[i] >= amt) {
                str[i] = (char)(str[i] + amt);
            }   
            /* If it wraps */
            else {
                int diff = amt + ('z' - str[i]);
                str[i] = (char)('a' + (diff-1));
            }
        } 
        else if ('A' <= str[i] && str[i] <= 'Z') {
            if ('Z' - str[i] >= amt) {
                str[i] = (char)(str[i] + amt);
            }   
            else {
                int diff = amt + ('Z' - str[i]);
                str[i] = (char)('A' + (diff-1));
            }
        }
    }
}
