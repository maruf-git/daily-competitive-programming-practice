// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // creating a vector of 5 elements
    vector<int> v({10, 20, 30, 40, 50});
    v.push_back(60);
    // inserting at 1st index
    v.insert(v.begin() + 1, 5); // takes iterator
    v.push_back(5);
    cout << v.size() << endl;
    // output
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "**********" << endl;

    // deleting 2nd index element
    v.erase(v.begin() + 2); // takes iterator
    cout << v.size() << endl;
    // finding from the end
    auto it = find(v.rbegin(), v.rend(), 5);
    v.erase(it.base() - 1); // takes iterator
    // output
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "**********" << endl;

    if (v.empty())
        cout << "The vector is empty" << endl;
    else
        cout << "The vector is not empty" << endl;

    // reverse the vector
    reverse(v.begin(), v.end());
    cout << "vector size: " << v.size() << endl;
    cout << "After reversing the vector: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // resize the vector
    // resized to 10 and the new elements are 0
    v.resize(10);
    cout << "vector size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // v.insert()
    // v.erase()

    // copy the vector
    cout << "Copy the vector" << endl;
    vector<int> v1 = {10, 20, 30};
    cout << "vector v1:";
    for (auto u : v1)
        cout << u << " ";
    cout << endl;

    vector<int> v2;
    // using assignment operator
    v2 = v1;
    cout << "vector v2:";
    for (auto u : v2)
        cout << u << " ";
    cout << endl;

    // using vector constructor
    vector<int> v3(v1);
    cout << "vector v3:";
    for (auto u : v3)
        cout << u << " ";
    cout << endl;

    // sorting in ascending order
    v1.push_back(5);
    sort(v1.begin(), v1.end());
    cout << "After sorting in ascending order: ";
    for (auto u : v1)
        cout << u << " ";
    cout << endl;

    // sorting in descending order
    sort(v1.rbegin(), v1.rend());
    // or
    // sort(v1.begin(),v1.end(),greater<int>());
    cout << "After sorting in descending order: ";
    for (auto u : v1)
        cout << u << " ";
    cout << endl;

    // swap two vectors
    // we can swap vectors that have the same type
    cout << "Before swapping : "<<endl;
    cout << "v1:";
    for (auto u : v1)
        cout << u << " ";
    cout << endl;
    cout << "v2:";
    for (auto u : v2)
        cout << u << " ";
    cout << endl;
    // swapping
    v1.swap(v2);
    cout << "After swapping : "<<endl;
    cout << "v1:";
    for (auto u : v1)
        cout << u << " ";
    cout << endl;
    cout << "v2:";
    for (auto u : v2)
        cout << u << " ";
    cout << endl;
    return 0;
}
