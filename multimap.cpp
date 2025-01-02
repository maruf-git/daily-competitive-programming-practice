#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, int> mp;
    // can have duplicate keys
    // everything is same as map

    mp.insert({1, 2});
    mp.insert({1, 3});
    mp.insert({1, 4});
    mp.insert({2, 3});
    mp.insert({2, 4});
    mp.insert({2, 5});
    mp.insert({10, 1});

    cout << "multimap:" << endl;
    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }
    // the number of times key 2 is present
    cout << "Number of times key 2 is present: " << mp.count(2) << endl;

    // delete all the occurrences of key 1
    mp.erase(1);
    cout << "After deleting all the occurrences of key 1:" << endl;
    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}