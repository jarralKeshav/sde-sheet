#include<bits/stdc++.h>
using namespace std;

int main(){

    set<vector<int>> st;
    vector<int> nums ={-1,0,1};
    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     int k;
    //     cin>>k;
    //     nums.push_back(k);
    // }

    for(int i=0;i<3;i++){
        for(int j=i+1;i<3;j++){
            for(int k=j+1;k<3;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>temp ={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);


                }
            }
        }
    }

    vector<vector<int>>ans(st.begin(),st.end());

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }


}