#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>ms;
    // multiset can have duplicate values 
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);
    for(auto u:ms){
        cout<<u<<endl;
    }


    return 0;
}