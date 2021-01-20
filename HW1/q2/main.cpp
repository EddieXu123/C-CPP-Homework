#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("question_2.txt");
    int words = 0;
    string s = "hello";

    while (file >> s) {
        words++;
    }

    cout << words;
}
