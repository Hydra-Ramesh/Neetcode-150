#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while (x != 0) {
            int r = x % 10;
            ans = ans * 10 + r;
            x /= 10;
        }
        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }
        return static_cast<int>(ans);
    }
};

int main() {
    Solution solution;

    // Sample test cases
    int nums[] = {123, -456, 120, 0, 1534236469};
    
    for (int x : nums) {
        int result = solution.reverse(x);
        cout << "reverse(" << x << ") = " << result << endl;
    }

    return 0;
}
