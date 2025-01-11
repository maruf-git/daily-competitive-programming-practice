// https://leetcode.com/problems/count-number-of-nice-subarrays/description/

// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int numberOfSubarrays(vector<int> &nums, int k)
{
    int cnt = 0;
    int l = 0, r = 0, odd = 0;

    vector<int> v;
    for (auto u : nums)
    {
        if (u % 2)
            v.push_back(1);
        else
            v.push_back(0);
    }

    while (r < v.size() && l <= r)
    {
        if (nums[r] % 2)
        {
            odd++;
        }
        if (odd >= k)
        {
            if (odd == k)
            {
                cnt++;
            }
            else
            {
                while (odd > k)
                {
                    if (nums[l] % 2)
                    {
                        odd--;
                    }
                    l++;
                }
                cnt++;
            }
        }

        r++;
    }
    cout << "return";
    return cnt;
}

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = numberOfSubarrays(v, k);
        cout << ans << endl;
    }

    return 0;
}
