// In The Name of Allah
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int lengthOfLongestSubstring(string s)
{
    map<char, int> m;
    int l = 0, r = 0, mx = 0;
    while (r < s.size())
    {
        m[s[r]]++;
        if (m[s[r]] <= 1)
        {
            mx = max(mx, r - l + 1);
        }
        else
        {
            while (m[s[r]] != 1)
            {
                m[s[l]]--;
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
    cin >> s;
    int ans = lengthOfLongestSubstring(s);
    cout << ans << endl;

    return 0;
}
