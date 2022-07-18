#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "aditya";
    string b = "ty";

    for (int i = 0; i < a.length(); i++)
    {
        int j = 0;
        for (; j < b.length(); j++)
        {
            if (a[i + j] == b[j])
                continue;
            else
            {
                break;
            }
        }

        if (j == b.length())
        {
            cout << i << " is the index";
        }
    }
    return 0;
}