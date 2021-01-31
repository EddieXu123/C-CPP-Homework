#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>

#include "challenge3.h"

using namespace std;

int main()
{
    cout << wordHunt("My what a lovely day", "hate love") << endl;
    cout << wordHunt("StopThat!!", "! ? *") << endl;
    cout << wordHunt("Guess who is coming to dinner?", "Who Dinner") << endl;
    cout << wordHunt("One last example", "") << endl;
    cout << wordHunt("", "") << endl;

    return 0;
}

bool wordHunt(string word1, string word2) {
    /* Edge cases */
    if (word1.length() == 0 && word2.length() == 0) {
        cout << "Both inputs are empty so returning True: ";
        return true;
    }

    if (word2.length() == 0) return false;

    vector<string> words;

    istringstream iss(word2);

    /* Get words into vector */
    while (iss) {
        string subs;
        iss >> subs;
        words.push_back(subs);
    }

    words.pop_back();

    /* For each word in vector, see if word1 contains the word */
    for (string word : words) {
        if (word1.find(word) != string::npos) return true;
    }

    return false;
}
