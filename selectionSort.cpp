#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        nums.push_back(k);
    }

     for(int i=0;i<=n-2;i++){
      int minNum = i;
        for(int j=i;j<=n-1;j++){

        if(nums[j]< nums[minNum]){
            minNum =j;
        }


        }
        swap(nums[i],nums[minNum]);
     }
        for(auto x:nums) cout<<x<<" ";        


}