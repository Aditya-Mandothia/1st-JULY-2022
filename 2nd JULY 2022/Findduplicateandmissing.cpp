#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int a, b;

    pair<int, int> res;
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] < 0) // -1 because of zero based indexing
        {
            a = abs(arr[i]);
        }
        else
        {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            b = i + 1;
            break;
        }
    }

    res.first = b;
    res.second = a;

    return res;
}
