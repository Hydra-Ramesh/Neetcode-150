#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countWays(int n, vector<int>& dp) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = countWays(n - 1, dp) + countWays(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return countWays(n, dp);
    }
};

int main() {
    Solution solution;

    // Test cases
    int test1 = 2;
    int test2 = 3;
    int test3 = 4;
    int test4 = 5;

    cout << "Ways to climb " << test1 << " stairs: " << solution.climbStairs(test1) << endl;
    cout << "Ways to climb " << test2 << " stairs: " << solution.climbStairs(test2) << endl;
    cout << "Ways to climb " << test3 << " stairs: " << solution.climbStairs(test3) << endl;
    cout << "Ways to climb " << test4 << " stairs: " << solution.climbStairs(test4) << endl;

    return 0;
}
