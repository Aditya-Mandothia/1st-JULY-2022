#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    string s = "(()";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return -1;

            char c = st.top();
            st.pop();

            if ((s[i] == ')' and c == '(') or (s[i] == ']' and c == '[') or (s[i] == '}' and c == '{'))
                continue;
            else
            {
                return -1;
            }
        }
    }

    if (st.empty())
    {
        cout << "Paranthesis was valid!";
    }
    else
    {
        cout << "Not a valid one!";
        return -1;
    }
    return 0;
}