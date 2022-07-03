#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void transpose(vector<vector<int>> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    void rotate(vector<vector<int>> &arr)
    {
        transpose(arr);
        for (int i = 0; i < arr.size(); i++)
        {
            reverse(arr[i].begin(), arr[i].end());
        }
    }
};