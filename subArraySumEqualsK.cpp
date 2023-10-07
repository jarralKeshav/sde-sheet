#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {1,1,1};
    int k=2;
    int n = arr.size();
    int count=0;
    long long sum=arr[0];
    int start=0;
    int end = arr.size()-1;

    while(start<end){

        if(sum==k) count++;
        for(int i=0;i<n;i++){
            int j=i+1;
        if(sum<k){
            sum+=arr[j];
            j++;
            if(sum==k) count++;
            else i++;
        }









        }
    }
    cout<<count<<endl;
}