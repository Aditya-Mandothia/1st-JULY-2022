#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {3, 10, 5, 1};
    vector<int> b(a.size(), -1);

    stack<int> st;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        while (!st.empty() and st.top() >= a[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            b[i] = st.top();
        }
        else
        {
            b[i] = -1;
        }

        st.push(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << ",";
    }

    return 0;
}