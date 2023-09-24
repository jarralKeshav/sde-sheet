#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> ump;
    vector<int> nums = {1,2,3,4,5,1,2,1};
    int n = nums.size();
    for(int i=0;i<n;i++){

        ump[nums[i]]++;
    }

    cout<<ump[4];
}