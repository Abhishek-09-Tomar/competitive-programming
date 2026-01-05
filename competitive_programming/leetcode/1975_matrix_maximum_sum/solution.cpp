#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        long long totalSum = 0;
        int minAbsValue = 1e9; // Initialize with a large value
        int negativeCount = 0;

        for (const auto &row : matrix)
        {
            for (int val : row)
            {
                // Add the absolute value to the total sum
                totalSum += abs(val);

                // Count how many negative numbers we have
                if (val < 0)
                {
                    negativeCount++;
                }

                // Track the smallest absolute value in the matrix
                minAbsValue = min(minAbsValue, abs(val));
            }
        }

        // If the count of negatives is odd, we must subtract
        // twice the smallest absolute value (once to remove it
        // from the sum and once to account for its negative state).
        if (negativeCount % 2 != 0)
        {
            totalSum -= 2LL * minAbsValue;
        }

        return totalSum;
    }
};

int main()
{
    // Boilerplate for faster I/O in CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;

    // Example Test Case
    // Matrix:
    //  1, -1
    // -1,  1
    vector<vector<int>> matrix = {{1, -1}, {-1, 1}};

    long long result = sol.maxMatrixSum(matrix);

    cout << "Maximum Matrix Sum: " << result << endl;

    // Additional Test Case: Odd number of negatives
    // Matrix:
    //  1, 2, 3
    // -1, -2, -3
    //  1, 2, 3
    vector<vector<int>> matrix2 = {{1, 2, 3}, {-1, -2, -3}, {1, 2, 3}};
    cout << "Maximum Matrix Sum (Case 2): " << sol.maxMatrixSum(matrix2) << endl;

    return 0;
}