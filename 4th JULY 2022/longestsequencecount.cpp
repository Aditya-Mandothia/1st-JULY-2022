#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        set<int> hashset;

        for (int num : nums)
        {
            hashset.insert(num);
        }

        int longeststreak = 0;
        int currentstreak = 0;

        for (int num : nums)
        {
            if (!hashset.count(num - 1))
            {
                int currentNum = num;
                currentstreak = 1;

                while (hashset.count(currentNum + 1))
                {
                    currentNum++;
                    currentstreak++;
                }
            }

            longeststreak = max(longeststreak, currentstreak);
        }

        return longeststreak;
    }
};