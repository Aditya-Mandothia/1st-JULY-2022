#include <bits/stdc++.h>
using namespace std;
int main()
{

    int deno[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = 9;

    int v = 49;

    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        while (v >= deno[i])
        {
            v -= deno[i];
            ans.push_back(deno[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}