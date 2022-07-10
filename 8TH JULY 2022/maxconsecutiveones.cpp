#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int cnt = 0;
        int maxi = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};

int main()
{

    return 0;
}