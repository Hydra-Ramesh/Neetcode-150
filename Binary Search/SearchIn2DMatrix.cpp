#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols - 1;

        while (row < rows && col >= 0) {
            int current = matrix[row][col];

            if (current == target) {
                return true;
            } else if (current < target) {
                row++;
            } else {
                col--;
            }
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1,  4,  7, 11},
        {2,  5,  8, 12},
        {3,  6,  9, 16},
        {10,13,14,17}
    };

    int target = 5;

    Solution solution;
    bool found = solution.searchMatrix(matrix, target);

    if (found) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
