#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> st = {6, 8, 3, 0, 15, 20, 5}; // defining a set with values
    st.insert(1);                          // inserting a value in set

    // printing the set using iterator
    cout << "printing the set using iterator" << endl;
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // printing the set using for each loop
    cout << "printing the set using for each loop" << endl;
    for (auto u : st)
    {
        cout << u << " ";
    }
    cout << endl;

    // set in descending order
    set<int, greater<int>> st2 = {5, 10, 1, 15};
    cout << "set in descending order" << endl;
    for (auto u : st2)
        cout << u << " ";
    cout << endl;

    // find and erase
    cout << "set st before find and erase:";
    for (auto u : st)
        cout << u << " ";
    cout << endl;

    if (st.count(8)) 
        st.erase(st.begin(), st.find(8)); // removes 0 to 7
    cout << "set st after find and erase:";
    for (auto u : st)
        cout << u << " ";
    cout << endl;

    return 0;
}