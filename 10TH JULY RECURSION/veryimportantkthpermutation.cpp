#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getPermutation(int n, int k)
    {

        int fact = 1;
        vector<int> numbers;

        for (int i = 1; i < n; i++)
        {
            fact = fact * i;
            numbers.push_back(i);
        }

        // we calculated fact till n-1 because if 4 numbers are there , there are going to be 6 compartments of 3 digits

        numbers.push_back(n);

        string ans = "";
        k = k - 1; // because of the zero based indexing

        while (true)
        {
            ans = ans + to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + k / fact);

            if (numbers.size() == 0)
            {
                break;
            }

            k = k % fact;
            fact = fact / numbers.size();
        }

        return ans;
    }
};
int main()
{

    return 0;
}