#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        // Iterate through each character of the first string
        for (int i = 0; i < strs[0].length(); i++)
        {
            char c = strs[0][i];

            // Compare this character with the same position in all other strings
            for (int j = 1; j < strs.size(); j++)
            {
                // If index i is out of bounds for strs[j]
                // OR the characters don't match, we found our prefix
                if (i == strs[j].length() || strs[j][i] != c)
                {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }
};