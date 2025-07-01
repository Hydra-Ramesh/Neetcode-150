#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for (int ele : nums) {
            if (ans.count(ele) > 0) {
                return true;
            } else {
                ans.insert(ele);
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {1, 2, 3, 4, 1};

    // Call the method and print the result
    if (sol.containsDuplicate(nums)) {
        cout << "Duplicates found." << endl;
    } else {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
