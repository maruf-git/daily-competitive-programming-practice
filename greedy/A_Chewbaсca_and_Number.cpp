#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int digit = s[i] - '0';
        int invertedDigit = 9 - digit;
        if (i == 0 && digit == 9)
            ans += s[i];
        else if (invertedDigit < digit)
            ans += (char)(invertedDigit + '0');
        else
            ans += s[i];
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;

    return 0;
}