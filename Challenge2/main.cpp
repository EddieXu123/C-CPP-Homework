#include <iostream>
#include <vector>
#include "challenge2.h"
using namespace std;

/*
USE FOR EASIER TESTING (Copy in and press enter):

4
5
0
1 2 0 4 5 2 2 9 8 4 3 2 9 0 4 6 6 6 6 6 f

*/

int main()
{
    int width, height, number, target;
    vector<int> numbers;

    cout << "Please enter your desired height (number of rows): ";
    cin >> height;

    cout << "Please enter your desired width (number of columns): ";
    cin >> width;

    cout << "Please enter your target: ";
    cin >> target;

    cout << "Please enter your stream of numbers (Going right to left, top to bottom). Press 'f' when finished: " << endl; 
    while (cin) {
        cin >> number;
        if (number == 'f' - 0) break;
        numbers.push_back(number);
    }

    if (numbers.size() - 1 != height * width) {
        cout << "The height and width entered do not result in a table with all your numbers" << endl;
        return 0;
    }


    cout << endl << endl;
    moveD(&numbers[0], width, height, target);

    cout << "OUTPUT: " << endl;


    int index = 0;
    for (int i = 0; i < height; i++) {
        cout << endl;
        for (int j = 0; j < width; j++) {
            cout << numbers[index++] << " ";
        }
    }
    return 0;
}

void moveD(int * block, int width, int height, int target) {
    for (int i = 0; i < width * height; i++) {
        if (block[i] == target) {
            int column = i % width;
            int row = i / width;
            int roomToGoLeft = column;
            int roomToGoDown = height - 1 - row;
            int maxDiag = min(roomToGoLeft, roomToGoDown);
            int replace = block[width*maxDiag - maxDiag + i];
            block[width*maxDiag - maxDiag + i] = target;
            block[i] = replace;
            break;
        }
    }
}

