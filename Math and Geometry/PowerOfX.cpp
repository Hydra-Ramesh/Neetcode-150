#include <iostream>
#include <limits.h>
using namespace std;

class Solution {
public:
    double myPow(double x, long n) {
        if(n == 0) return 1;
        if(n < 0) {
            return 1 / myPow(x, -n);
        }
        if(n % 2 == 1) {
            return x * myPow(x, n - 1);
        }
        return myPow(x * x, n / 2);
    }
};

int main() {
    Solution solution;

    // Sample test cases
    cout << "2^10 = " << solution.myPow(2.0, 10) << endl;
    cout << "2^-2 = " << solution.myPow(2.0, -2) << endl;
    cout << "2^0 = " << solution.myPow(2.0, 0) << endl;
    cout << "2^INT_MIN = " << solution.myPow(2.0, static_cast<long>(INT_MIN)) << endl;

    return 0;
}
