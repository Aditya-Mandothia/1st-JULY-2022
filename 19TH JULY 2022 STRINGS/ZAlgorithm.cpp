#include <bits/stdc++.h>
using namespace std;

int solutionZ(string pat, string txt)
{
    int patlen = pat.length();
    int txtlen = txt.length();

    // vector<int> ans; 
    int ans;
    string new_string = pat + "#" + txt;
    cout << new_string << endl;

    vector<int> z;

    int i = 0;

    while (i < new_string.length())
    {
        if (i <= patlen)
            z.push_back(0);
        else
        {
            int left = 0, right = 0;

            if (new_string[left] == new_string[i])
            {
                right = i; // because from here we will start moving right for pattern matching
                while (new_string[left] == new_string[right] && right < new_string.length())
                {
                    left++;
                    right++;
                }
            }

            z.push_back(left);
        }

        i++;
    }

    for(int i=0;i<new_string.length();i++)
    {
        if(z[i]==patlen){
            ans = i-patlen-1;
            return ans;
        } //i-patlen-1 will give 0 based indexing
    }

    return -1;
}
int main()
{
    // Z-Algorithm is used for string searching
    string pat = "ty";
    string txt = "adityaaditya";

    int res = solutionZ(pat, txt);
    cout<<res;


    return 0;
}