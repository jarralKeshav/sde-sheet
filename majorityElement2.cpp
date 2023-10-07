#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr ={1,2};
    int n = arr.size();
    // cout<<"size: "<<n<<"\n";

    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second > (n/3)) cout<<it.first<<" ";
    }

       







return 0;

}
