#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll prev1 = 1, prev2 = 0;
    if (n == 0)
        cout << 0 << " " << 0 << " " << 0 << endl;
    else if (n == 1)
        cout << 0 << " " << 0 << " " << 1 << endl;
    else
    {
        ll cur = 0;
        while (cur <= n)
        {
            cur += prev1 + prev2;
            // cout<<cur<<" ";
            if (cur == n)
            {
                cout << 0 << " " << prev2 << " " << prev1 << endl;
                return 0;
            }
            prev2 = prev1;
            prev1 = cur;
            cur = 0;
        }
    }

    return 0;
}