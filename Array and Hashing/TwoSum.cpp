#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int match = target - num;
            if (seen.count(match)) {
                return {seen[match], i};
            }
            seen[num] = i;
        }
        return {};
    }
};

int main() {
    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Create an object of Solution and call twoSum
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    // Print the result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
