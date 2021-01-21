#include <iostream>
#include <vector>
#include "challenge2.h"
using namespace std;

int main()
{
    int pointer[4][5] = {1,2,0,4,5,2,2,9,8,4,3,2,9,0,4,6,6,6,6,6}; // If input is 2D
    //int pointer[20] = {1,2,0,4,5,2,2,9,8,4,3,2,9,0,4,6,6,6,6,6}; // Uncomment if input is 1D

    moveD(*pointer, 5, 4, 0); // If input is 1D array, then please replace '*pointer' with 'pointer'

    cout << "OUTPUT: " << endl;

    /* Printing New Block */
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
    /* traverse the block of memory, which is width*height large */
    for (int i = 0; i < width * height; i++) {
        if (block[i] == target) {
            int column = i % width;
            int row = i / width;
            int roomToGoLeft = column; // The amount of room I have to go left is equal to the column index
            int roomToGoDown = height - 1 - row; // The room I have to go down is equal to the height index
            int maxDiag = min(roomToGoLeft, roomToGoDown); // Take the minimum amount of room I can go in either direction
            int replace = block[width*maxDiag - maxDiag + i]; // Swap
            block[width*maxDiag - maxDiag + i] = target;
            block[i] = replace;
            break; // Since I only need to move a single target, break after this is finished
        }
    }
}

