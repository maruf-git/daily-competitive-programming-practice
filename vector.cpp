// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // creating a vector of 5 elements
    vector<int> v({10, 20, 30});
    v.push_back(40);
    v.insert(v.begin() + 1, 5); // takes iterator
    v.push_back(5);

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "**********" << endl;
    v.erase(v.begin() + 2); // takes iterator
    cout << v.size() << endl;
    auto it = find(v.rbegin(), v.rend(), 5);
    v.erase(it.base() - 1); // takes iterator
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "**********" << endl;

    if(v.empty())cout<<"The vector is empty"<<endl;
    else cout<<"The vector is not empty"<<endl;

    reverse(v.begin(), v.end());
    cout<<"vector size: "<<v.size()<<endl;
    cout<<"After reversing the vector: "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<"After resize:"<<endl;
    v.resize(10); // resized to 10 and the new elements are 0
    cout<<"vector size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    // v.insert()
    // v.erase()

    return 0;
}
