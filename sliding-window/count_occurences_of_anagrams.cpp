// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>
using namespace std;

int search(string &pat, string &txt)
{
    // code here
    int cnt = 0;
    map<char, int> m_pat, m_substr;
    for (auto u : pat)
        m_pat[u]++;
    int i = 0, j = 0;
    while (j < txt.size())
    {
        m_substr[txt[j]]++;

        if (j - i + 1 == pat.size())
        {

            if (m_pat == m_substr)
            {
                cnt++;
            }
            m_substr[txt[i]]--;
            if (m_substr[txt[i]] == 0)
                m_substr.erase(txt[i]);
            i++;
        }
        j++;
    }
    return cnt;
}

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        string text, pat;
        cin >> text >> pat;
        int cnt = search(pat, text);
        cout << cnt << endl;
    }

    return 0;
}