#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> q;
    int freq[27] = {0}; // assuming there are 26 characters "a" to "z"

    char ch;
    cin >> ch;

    while (ch != '.')
    {
        q.push(ch);
        freq[ch - 'a']++;

        while (!q.empty())
        {
            int ind = q.front() - 'a';
            if (freq[ind] > 1)
            {
                q.pop();
            }
            else
            {
                cout << q.front() << endl;
                break;
            }
        }

        if (q.empty())
        {
            cout << "-1" << endl;
        }

        cin >> ch;
    }
    return 0;
}