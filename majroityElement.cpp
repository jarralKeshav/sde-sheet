#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,2,3};
     unordered_map<int,int> ump;
        int len  = ceil(nums.size()/2);
        int n = nums.size();
        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }

        for(auto it:ump){
            if(it.second>len){
                cout<<it.first<<endl;
            }
        }
        // return {};
}