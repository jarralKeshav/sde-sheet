#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr,int i,int n){
    if(i==n){return;}


    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }

    insertionSort(arr,i+1,n);
    

}



int main(){
    vector<int> arr = {13,46,24,52,20,9};
    int n = arr.size();

    insertionSort(arr,0,n);
    for(auto x:arr) cout<<x<<" ";
    return 0;
    
    }