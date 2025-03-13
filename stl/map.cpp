#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    int arr[] = {1, 2, 3, 2, 3, 5, 4};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        mp[arr[i]]++;
    }

    cout << "output map using iterator:" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout<<it->first<<" "<<it->second<<endl;
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << "output map using for each loop" << endl;
    for (auto u : mp)
    {
        cout << u.first << " " << u.second << endl;
    }

    // delete key 2 from map 
    mp.erase(2);
    cout << "output map after deleting key 2:" << endl;
    for(auto u:mp){
        cout<<u.first<<" "<<u.second<<endl;
    }
    mp[10];
    cout << "output map after adding key 10:" << endl;
    for(auto u:mp){
        cout<<u.first<<" "<<u.second<<endl;
    }

    cout<<"insertion in map:"<<endl;
    mp.insert({100,20});
    mp.insert(make_pair(50,10));
    mp[30]=5;
    for(auto u:mp){
        cout<<u.first<<" "<<u.second<<endl;
    }

    cout<<mp.count(30)<<endl;

    return 0;
}