#include <iostream>
#include "hw2q1.h"
using namespace std;

int main()
{
    string str = "The answer to Question 1 is...!";
    int amt = 5;
    if (amt < 0) {
        cout << "Shift amount cannot be negative";
        return 0;
    }

    codeCipher(amt % 26, &str[0], str.length());
    cout << "Output:" << endl << str;
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

        /* Same but for capital letters */
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
