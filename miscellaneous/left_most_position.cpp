#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findLeftmost(const vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 5, 7, 7, 7, 7, 10, 10, 11};
    int target = 7;

    int result = findLeftmost(arr, target);

    if (result != -1)
        cout << "The leftmost position of " << target << " is index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}