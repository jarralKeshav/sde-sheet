#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums={-2,0,3,-1,4,0,3,4,1,1,1,-3,-5,4,0};
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());

    // int n;
    // cin>>n;

    // for(int inp=0;inp<n;inp++){
    //     int k;
    //     cin>>k;
    //     nums.push_back(k);
    // }

    for(int i=0;i<15;i++){
        if(i!=0 && nums[i]==nums[i-1]) continue;

        int j=i+1;
        int k=14;
        while(j<k){
        int sum = nums[i]+nums[j]+nums[k];

        if(sum>0){
            k--;

        }
        else if(sum<0){
            j++;

        }
        else{
            vector<int> temp = {nums[i],nums[j],nums[k]};
            ans.push_back(temp);

            j++;
            k--;
            while(j<k && nums[j]==nums[j-1]) j++;
            while(j<k && nums[k]==nums[k+1]) k--;



        }
        }


    }


    int ansSize = ans.size();
    // int ansColSize = ans[0].size();
    for(int i=0;i<ansSize;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }


}