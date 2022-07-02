#include <bits/stdc++.h>
using namespace std;
int printSubArray3(int arr[], int n)
{
    int l = 0;
    int cs = 0;

    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        l = max(cs, l);
    }
    return l;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, -4, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << "The largest sum out of all sub-arrays is : " << printSubArray3(arr, n);
    return 0;
}

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    
    int cs = 0, ms = INT_MIN;
        
    for (int i = 0; i < arr.size(); i++)
    {
        cs += arr[i];
        ms = max(ms, cs);
        if (cs < 0)
        {
            cs = 0;
        }
        
    }
    return ms;
        
    }
};