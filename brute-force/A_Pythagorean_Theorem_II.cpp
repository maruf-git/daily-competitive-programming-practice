#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int cnt = 0;
    for (long long int i = 1; i <= n; i++)
    {
        for (long long int j = i; j <= n; j++)
        {
            long long int k = (long long int)sqrt(i * i + j * j);

            if (k <= n && k * k == i * i + j * j)
            {
                cnt++;
                // cout << i << " " << j << " " << k << endl;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}