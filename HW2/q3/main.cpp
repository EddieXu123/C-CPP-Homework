#include <iostream>
#include <sstream>
#include <vector>
#include "hw2q3.h"

using namespace std;

int main()
{
    string sentence[] = {"This gnirts i","s on","t a test !drow"};
    int switchIndex = 2;

    cout << endl << "Output: " << flipEveryXthWord(sentence, *(&sentence + 1) - sentence, switchIndex);
    return 0;
}

std::string flipEveryXthWord(std::string sentence[], int size, int x) {
    string output;
    for (int i = 0; i < size; i++) {
        string line = sentence[i];
        stringstream ssin(line);
        int words = 1;
        // While I have words
        int counter = 1;
        while (ssin.good()) {
            string word;
            ssin >> word;
            if (counter % x == 0) output += reverse(word) + " ";
            else output += word + " ";
            words++;
            counter++;
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