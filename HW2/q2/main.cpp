#include <vector>
#include <iostream>
#include "hw2q2.h"

using namespace std;

int main() {
    int places[] = {8,7,1,1,0,2,6,3,0,4,1,5};
    string input = "ol,wrd eH";

    cout << "Output: " << buildSentence(&input[0], input.length(), places, *(&places + 1) - places);
    return 0;
}

std::string buildSentence(char components[], int lc, int places[], int lp) {
    string output;

    for (int i = 0; i < lp; i++) {
        output += components[places[i]];
    }

    return output;
}


