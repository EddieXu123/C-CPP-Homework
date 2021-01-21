#include <iostream>
#include <vector>
#include "hw2q4.h"
using namespace std;

int main()
{
    int pointer[4][5] = {{1,2,0,0,5},{2,2,9,8,4},{3,2,9,0,4},{6,6,6,6,0}};
    //int pointer[20] = {1,2,0,0,5,2,2,9,8,4,3,2,9,0,4,6,6,6,6,0};

    moveD(*pointer, 5, 4, 0); // If input is 1D array, then please replace '*pointer' with 'pointer'

    cout << "OUTPUT: " << endl;

    int index = 0;
    for (int i = 0; i < 4; i++) {
        cout << endl;
        for (int j = 0; j < 5; j++) {
            cout << pointer[i][j] << " "; // If input is 2D array, then please replace 'pointer[i][j]' with 'pointer[index++]'
        }
    }
    return 0;
}

void moveD(int * block, int width, int height, int target) {
    vector<int> replacedIndexes;
    
    for (int i = 0; i < width * height; i++) {
        if (block[i] == target && (find(replacedIndexes.begin(), replacedIndexes.end(), i) == replacedIndexes.end())) {
            int startIndex = width * height - (width - (i % width)); // The index I start by is here (The last row, in the column I found my target)
            int replace = block[startIndex]; // The value I want to swap

            /* While I still have room to go upwards, and while I have found my index */
            while (startIndex >= 0 && replace == target && (find(replacedIndexes.begin(), replacedIndexes.end(), startIndex) != replacedIndexes.end())) {
                startIndex -= width; // Keep traversing upwards
                replace = block[startIndex];
            }
            /* Swap */
            block[startIndex] = target;
            block[i] = replace;
            replacedIndexes.push_back(startIndex);
        }
    }
}

