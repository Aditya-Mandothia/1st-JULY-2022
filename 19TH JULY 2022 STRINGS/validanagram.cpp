#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> m;

        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (m.find(t[i]) != m.end())
            {
                m[t[i]]--;
            }
        }

        for (auto items : m)
        {
            if (items.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{

    return 0;
}