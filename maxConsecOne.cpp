#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums ={1,0,1,1,0,1};
    int count=0;
    int maxCount =0;
    int len = nums.size();
    for(int i=0;i<len;i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        maxCount = max(maxCount,count);
    
}
    cout<<"count outside: "<<count<<"\n";
    cout<<"Max count: "<<maxCount+1;
}