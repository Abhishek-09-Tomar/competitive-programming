#include <bits/stdc++.h>
using namespace std;

/*
    Fast I/O macro
    Disables synchronization with C stdio
    Unties cin and cout for faster input/output
*/
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

/*
    LeetCode 1390 - Four Divisors

    Given an array of integers, for each number:
    - If it has exactly 4 divisors, add the sum of those divisors
    - Otherwise ignore it
*/
class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int ans = 0;

        // Iterate over each number in the array
        for (int n : nums)
        {
            vector<int> divisors;

            // Find divisors up to sqrt(n)
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    divisors.push_back(i);

                    // Add paired divisor if different
                    if (i != n / i)
                        divisors.push_back(n / i);
                }

                // Early exit if more than 4 divisors found
                if (divisors.size() > 4)
                    break;
            }

            // If exactly 4 divisors, sum them
            if (divisors.size() == 4)
            {
                int sum = 0;
                for (int d : divisors)
                    sum += d;
                ans += sum;
            }
        }
        return ans;
    }
};

int main()
{
    fastio();

    /*
        Input format (for local testing):
        n  -> number of elements
        n integers -> array elements

        Example:
        3
        21 4 7
    */

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.sumFourDivisors(nums) << "\n";

    return 0;
}
