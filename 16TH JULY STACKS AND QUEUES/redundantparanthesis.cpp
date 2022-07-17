#include <bits/stdc++.h>
using namespace std;

bool checkRedundant(string str)
{
    stack<int> s;

    for (char ch : str)
    {
        if (ch != ')')
        {
            s.push(ch);
        }
        else
        {
            bool operator_found = false;

            while (!s.empty() and s.top() != '(')
            {
                char top = s.top();
                if (top == '+' or top == '-')
                {
                    operator_found = true;
                }

                s.pop();
            }

            s.pop();

            if (operator_found == false)
            {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    string str = "((a+b))";
    return 0;
}