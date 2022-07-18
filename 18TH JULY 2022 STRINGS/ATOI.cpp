#include <bits/stdc++.h>
using namespace std;

int ATOI(string s)
{
    int i = 0;
    int res = 0;

    while (s[i] != '\0')
    {
        int a = s[i] - '0';
        if (a >= 0 and a <= 9)
        {
            res = (res * 10) + a;
        }
        else{
            return -1;
        }
        i++;
    }

    return res;
}

int main()
{
    string s="3a4";
    cout<<ATOI(s);
    return 0;
}