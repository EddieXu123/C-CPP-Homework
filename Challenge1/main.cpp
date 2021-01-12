#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* Helper method to return a sorted vector of all the numbers from my input */
vector<int> sortedVectorFromString(string input) {
    vector<int> nums;
    for (int i = 0; i < input.length(); i++) {
        if (isnumber(input[i])) nums.push_back(input[i] - '0');
    }

    sort(nums.begin(), nums.end());
    return nums;
}

/* Helper method to replace the integer in my input string with the correct on from my vector */
string rearrange(vector<int> nums, string input) {
    int index = 0;
    string output;

    for (int i = 0; i < input.length(); i++) {
        if (!isnumber(input[i])) output += input[i];
        else output += to_string(nums[index++]);
    }

    return output;
}

int main() {

    string input;

    cout << "Please enter your input string: ";
    getline(cin, input);
    vector<int> nums = sortedVectorFromString((input));
    string output = rearrange(nums, input);

    cout << "OUTPUT: " << output;

    return 0;
}