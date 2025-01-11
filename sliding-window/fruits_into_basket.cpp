// https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1

// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int totalFruits(vector<int> &arr)
{
    // code here
    int mx = 0;
    int l = 0, r = 0;
    map<int, int> m;
    while (r < arr.size())
    {
        m[arr[r]]++;
        if (m.size() <= 2)
        {
            mx = max(mx, r - l + 1);
        }
        else
        {
            while (m.size() != 2)
            {
                m[arr[l]]--;
                if (m[arr[l]] == 0)
                    m.erase(arr[l]);
                l++;
            }
        }
        r++;
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = totalFruits(v);
    cout << ans << endl;

    return 0;
}
