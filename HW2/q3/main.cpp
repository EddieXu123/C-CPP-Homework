#include <iostream>
#include <sstream>
#include <vector>
#include "hw2q3.h"

using namespace std;

/*
USE FOR EASIER TESTING (For the String array):

This gnirts i
s on
t a test !drow
f

*/

int main()
{
    vector<string> words;
    int switchIndex;
    string c;

    cout << "Please enter your strings (Press 'f' when finished'): " << endl;
    while (getline(cin, c)) {
        if (c[0] == '\"' || c[c.length() - 1] == '\"') {
            cout << "Please do not include quotation marks in your String (Keep going)" << endl;
            continue;
        }
        if (c.compare("f") == 0) break;
        words.push_back(c);
    }

    string sentence[words.size()];
    for (int i = 0; i < words.size(); i++) {
        sentence[i] = words[i];
    }

    cout << "Please enter the index you want flipped in each string: ";
    cin >> switchIndex;
    if (!(0 <= switchIndex && switchIndex <= INT_MAX)) {
        cout << "Input must be nonnegative";
        return 0;
    }

    cout << endl << "Output: " << flipEveryXthWord(sentence, words.size(), switchIndex);
    return 0;
}

std::string flipEveryXthWord(std::string sentence[], int size, int x) {
    string output;
    for (int i = 0; i < size; i++) {
        string line = sentence[i];
        stringstream ssin(line);
        int words = 1;
        // While I have words
        while (ssin.good()) {
            string word;
            ssin >> word;
            if (words == x) output += reverse(word) + " ";
            else output += word + " ";
            words++;
        }
        // Get rid of extra space at end of each string arr
        output = output.substr(0, output.size() - 1);
    }
    return output;
}

std::string reverse(std::string s) {
    string output;
    for (int i = s.length() - 1; i >= 0; i--) {
        output += s[i];
    }

    return output;
}