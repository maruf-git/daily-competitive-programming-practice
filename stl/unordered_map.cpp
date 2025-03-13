#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    // most of the  cases unordered_map has better time complexity than map
    // when hash collusion occurs then time complexity is O(n)
    // otherwise it is O(1)
    // in case of higher hash collusion it is better to use map

    mp[1] = 2;
    mp[1] = 10;
    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}