#include <bits/stdc++.h>
using namespace std;

double multiply(int number, int n)
{
    double ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }

    return ans;
}

void getNthRoot(int n, int m)
{
    double low = 1;
    double high = m;

    double eps = 1e-6; // to get answer upto 5 decimal places

    while (high - low > eps)
    {
        double mid = (high + low) / 2.0;

        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    cout << low << " " << high << endl;  //both the values are going to be the same 
    cout << pow(m, (double)1.0 / (double)n);
}

int main()
{
    int n, m;
    // cin >> n >> m;

    getNthRoot(3, 27);
    return 0;
}