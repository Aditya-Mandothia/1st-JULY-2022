#include <bits/stdc++.h>
using namespace std;

int calculateMinPatforms(int at[], int dt[], int n)
{
    // Write your code here.
    sort(at, at + n);
    sort(dt, dt + n);

    int plat_needed = 1, result = 1;

    int i = 1;
    int j = 0;

    while (i < n and j < n)
    {
        if (at[i] <= dt[j])
        {
            plat_needed++;
            i++;
        }
        else if (at[i] > dt[j])
        {
            plat_needed--;
            j++;
        }

        if (plat_needed > result)
        {
            result = plat_needed;
        }
    }

    return result;
}
int main()
{

    return 0;
}