#include <vector>
#include <iostream>
#include "hw2q2.h"

using namespace std;

/*
USE FOR EASIER TESTING (Copy in and press enter):

ol,wrd eH
8 7 1 1 0 2 6 3 0 4 1 5 f

*/

int main()
{
    string components;
    int number;
    cout << "Please enter your build sentence: ";
    getline(cin, components);

    vector<int> tempPlaces;
    cout << "Please enter your integers (Spaces to separate and press 'f' when finished'): " << endl;
    while (cin) {
        cin >> number;
        if (number == 'f' - 0) break;
        if (!(0 <= number && number <= components.length())) {
            cout << "Number must be between 0 and " << components.length();
        }
        tempPlaces.push_back(number);
    }

    int places[tempPlaces.size() - 1];
    for (int i = 0; i < tempPlaces.size() - 1; i++) {
        places[i] = tempPlaces[i];
    }

    cout << "Output: " << buildSentence(&components[0], components.length(), places, tempPlaces.size() - 1);
    return 0;
}

std::string buildSentence(char components[], int lc, int places[], int lp) {
    string output;

    for (int i = 0; i < lp; i++) {
        output += components[places[i]];
    }

    return output;
}


