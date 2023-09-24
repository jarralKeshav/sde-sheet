#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};
    vector<int> pos;
        vector<int> neg;
        int n= nums.size();
        // int num=0;
        for(int num:nums){
            if(num>=0){
                pos.push_back(num);
            }
        }
        for(int ele:nums){
            if(ele<0){
                neg.push_back(ele);
            }
        }
        int j=0;
       for(int i=0;i<n;i=i+2){
               nums[i] = pos[j];
               j++;
               cout<<"j: "<<j<<" ";
       }
       cout<<endl;
       int k=0;
       for(int i=1;i<n;i=i+2){
               nums[i]=neg[k];
           k++;
           cout<<"K : "<<k<<" ";
       }
       cout<<endl;

       for(auto p:pos) cout<<p<<" ";
       cout<<"\n";
       for(auto negas:neg) cout<<negas<<" ";
       cout<<"\n";

      
       for(auto x:nums) cout<<x<<" ";
}