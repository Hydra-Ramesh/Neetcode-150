#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";
    string test4 = "Madam";

    cout << "\"" << test1 << "\" is palindrome? " << (solution.isPalindrome(test1) ? "Yes" : "No") << endl;
    cout << "\"" << test2 << "\" is palindrome? " << (solution.isPalindrome(test2) ? "Yes" : "No") << endl;
    cout << "\"" << test3 << "\" is palindrome? " << (solution.isPalindrome(test3) ? "Yes" : "No") << endl;
    cout << "\"" << test4 << "\" is palindrome? " << (solution.isPalindrome(test4) ? "Yes" : "No") << endl;

    return 0;
}
