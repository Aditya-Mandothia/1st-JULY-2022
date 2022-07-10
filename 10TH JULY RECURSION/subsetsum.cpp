#include <bits/stdc++.h>
using namespace std;

void func(int ind, int sum, vector<int> &arr, int n, vector<int> &sumsubset)
{
    if (ind == n)
    {
        sumsubset.push_back(sum);
        return;
    }

    func(ind + 1, sum + arr[ind], arr, n, sumsubset);
    func(ind + 1, sum, arr, n, sumsubset);
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n = num.size();
    vector<int> sumsubset;
    func(0, 0, num, n, sumsubset);
    sort(sumsubset.begin(), sumsubset.end());

    return sumsubset;
}

int main()
{

    return 0;
}