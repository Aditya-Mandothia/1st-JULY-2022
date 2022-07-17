#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {100,80,60,70,75,85};

    vector<int> ans;
    stack<pair<int,int>> s;

    for(auto a : arr)
    {
        int days=1;
        while(!s.empty() and s.top().first<=a)
        {
            days+=s.top().second;
            s.pop();
        }

        s.push({a,days});
        ans.push_back(days);
    }

    for(auto i : ans)
    {
        cout<<i<<",";
    }
    return 0;
}