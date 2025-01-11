// In The Name of Allah
// https://leetcode.com/problems/max-consecutive-ones-iii/description/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    map<int, int> m;
    int l = 0, r = 0, mx = 0;
    while (r < nums.size())
    {
        if (nums[r] == 0)
            m[0]++;
        if (m[0] <= k)
        {
            mx = max(mx, r - l + 1);
        }
        else
        {
            while (m[0] != k)
            {
                if (nums[l] == 0)
                    m[0]--;
                l++;
            }
        }
        r++;
    }
    return mx;
}

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = longestOnes(v, k);
    cout << ans << endl;
    return 0;
}
