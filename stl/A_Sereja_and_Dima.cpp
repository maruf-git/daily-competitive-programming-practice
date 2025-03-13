#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s = 0, d = 0, f = 0, l = 0, r = n - 1;
    while (l <= r) // using two pointer approach
    {
        if (f % 2 == 0)
        {
            if (v[l] > v[r])
            {
                s += v[l];
                l++;
            }
            else
            {
                s += v[r];
                r--;
            }
        }
        else
        {
            if (v[l] > v[r])
            {
                d += v[l];
                l++;
            }
            else
            {
                d += v[r];
                r--;
            }
        }
        f++;
    }
    cout << s << " " << d << endl;

    return 0;
}