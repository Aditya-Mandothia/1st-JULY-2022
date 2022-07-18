#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string result="";
    int i = 0;
    int n = s.length();

    while (i < n)
    {
        while (i < n and s[i] == ' ')
        {
            i++;
        }

        if (i >= n)
            break;

        int j = i + 1;

        while (j < n and s[j] != ' ')
        {
            j++;
        }
        string sub = s.substr(i, j);

        if (result.length() == 0)
        {
            result = sub;
            i=j+1;
        }

        else
        {
            result = sub + " " + result;
            i = j + 1;
        }
    }

    return result;
}

int main()
{
    string s = "aditya mandothia";
    string answer = reverseWords(s);
    cout << answer << endl;

    return 0;
}