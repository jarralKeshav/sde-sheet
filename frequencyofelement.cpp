#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v;
   int size;
   cin>>size;

   for(int i=0;i<size;i++){
    int k;
    cin>>k;
    v.push_back(k);
   }
    map<int,int> mp;

    for(int i=0;i<size;i++){
        mp[v[i]]++;
    }

    for(auto &it:mp){
        cout<<it.first<<" "<<it.second<<'\n';
    }

    // cout<<"max size: "<<mp.max_size();
    // std::map<int,int>::iterator best = max_element(mp.begin(),mp.end(),[] (const std::pair<int,int>& a, const std::pair<int,int>& b)->bool{ return a.second < b.second; } );
    // cout << best->first << " , " << best->second << "\n";

    auto it = std::min_element(begin(mp),end(mp),[](const auto &l,const auto &r ){return l.second<r.second;});
    cout<<it->second<<" "<<it->first;

}