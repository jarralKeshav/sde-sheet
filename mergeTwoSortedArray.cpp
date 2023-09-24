#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a = {1,2,3,4,6};
    vector<int>b ={2,3,5};

     set<int>s;
   int lenA = a.size();
   int lenB = b.size();
//    int len = lenA+lenB;
   for(int i=0;i<lenA;i++){
       s.insert(a[i]);
   }
   for(int i=0;i<lenB;i++){
       s.insert(b[i]);
   }
   vector<int>ans(s.begin(),s.end());

   for(auto x:ans) cout<<x<<" ";
}