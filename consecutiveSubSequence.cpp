#include<bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int> arr = {100,4,200,1,3,2};
    int n = arr.size();

    set<int> st;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto num:st) cout<<num<<" ";
    




    return 0;
}