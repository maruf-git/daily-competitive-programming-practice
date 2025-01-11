// https://leetcode.com/problems/longest-repeating-character-replacement/description/

// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int characterReplacement(string s, int k)
{
    map<char, int> m;
    int l = 0, r = 0, mx = 0, mx_freq = 0;
    int cnt = 0;
    while (r < s.size())
    {
        m[s[r]]++;
        mx_freq = max(mx_freq, m[s[r]]);
        if (r - l + 1 - mx_freq <= k)
        {
            mx = max(mx, r - l + 1);
        }
        else
        {
            if (r - l + 1 - mx_freq != k)
            {
                m[s[l]]--;
                mx_freq = 0;
                for (auto u : m)
                    mx_freq = max(mx_freq, u.second);
                l++;
            }
        }
        r++;
    }
    return mx;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;

    int ans = characterReplacement(s, k);
    cout << ans << endl;

    return 0;
}
