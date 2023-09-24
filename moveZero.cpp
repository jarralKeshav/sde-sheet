#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int len;
    cin>>len;
    for(int i=0;i<len;i++){
        int k;
        cin>>k;
        nums.push_back(k);
    }
    // int number=nums[0];
    int count=0;
    
    for(int i=len-1;i>=0;i--){
        if(nums[i]==0){
            count++;
            nums.erase(nums.begin()+i);
        }
    }
    for(int i=0;i<count;i++){
        nums.push_back(0);
    }

    

    for(auto x:nums) cout<<x<<" ";


}