#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p1;
    pair<int,char>p2;
    cout<<"pair default value check:"<<endl;
    cout<<"p1:"<<p1.first<<" "<<p1.second<<endl; // 0 and 0
    cout<<"p2:"<<p2.first<<" "<<p2.second<<endl; // 0 and null character

    p1 = {1,2};
    p2 = make_pair(1,'a');
    cout<<"pair value check:"<<endl;
    cout<<"p1:"<<p1.first<<" "<<p1.second<<endl; // 1 and 2
    cout<<"p2:"<<p2.first<<" "<<p2.second<<endl; // 1 and a

    vector<pair<int,int>>vp;
    vp.push_back({10,20});
    vp.push_back({30,40});
    vp.push_back({50,60});
    cout<<"ouput vector of pair way 1:"<<endl;
    for(int i=0;i<vp.size(); i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

    cout<<"ouput vector of pair way 2:"<<endl;  
    for(auto u:vp){
        cout<<u.first<<" "<<u.second<<endl;
    }


    return 0;
}