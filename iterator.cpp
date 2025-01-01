#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // declaring an iterator for vector
    cout << "way 1:" << endl;
    vector<int>::iterator it = v.begin();
    // output the vector using iterator
    for (it; it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // or
    cout << "way 2:" << endl;
    auto it2 = v.begin();
    for (it2; it2 != v.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;

    return 0;
}