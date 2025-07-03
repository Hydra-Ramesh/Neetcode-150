#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto ele : s) {
            if (ele == '(' || ele == '{' || ele == '[') {
                st.push(ele);
            } else {
                if (st.empty()) return false;
                char ch = st.top();
                st.pop();
                if ((ele == ')' && ch == '(') ||
                    (ele == ']' && ch == '[') ||
                    (ele == '}' && ch == '{')) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    Solution sol;
    bool result = sol.isValid(input);

    if (result) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }

    return 0;
}
