 #include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
    public:
    bool isPalindrome (int x) {
        if (flipped(x) == x) return true;
        else return false;
    }
    int flipped (int x) {
        string s = to_string(x); // convert x input to a string "x"
        reverse (s.begin(), s.end());
        int newFlipped = stoi(s); // convert back to integer
        return newFlipped;
    } 
};

int main () { 
    int input = 11111111; //sample input
    Solution solution; 
    bool result = solution.isPalindrome(input);
    if (result) {
        cout << "True." << endl << endl;
        cout << input << " reads as " << input << " from left to right and " << solution.flipped(input) << " from right to left."; 
    }
    else {
        cout << "False. Not a Palindrome." << endl << endl;
        cout << "Because " << input << " reads as " << solution.flipped(input) << " from left to right and " << solution.flipped(input) << " from right to left.";
    }
    return 0;
}

