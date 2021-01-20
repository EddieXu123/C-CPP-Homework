#include <iostream>
using namespace std;

bool compareStrings(string A, string B, int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) return false;
    }

    return true;
}

int main() {
    string A;
    cout << "Please Enter your first String: ";
    getline(cin, A);

    string B;
    cout << "Please Enter your second String: ";
    getline(cin, B);

    string n;
    cout << "Please enter an integer: ";
    getline(cin, n);

    for (int i = 0; i < n.length(); i++) {
        if (!isdigit(n[i])) return 0;
    }

    int num = stoi(n);

    if (num < 1) return 0;
    if (num > min(A.length(), B.length())) cout << (A.compare(B) == 0 ? "TRUE" : "FALSE");
    else cout << (compareStrings(A, B, num) ? "TRUE" : "FALSE");

    return 0;
}

