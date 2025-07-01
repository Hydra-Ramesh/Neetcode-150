#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 7;

    int result = solution.search(nums, target);
    cout << "Index of " << target << ": " << result << endl;

    return 0;
}
