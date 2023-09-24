#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>&arr,int low, int high){
    int pivotElement = arr[0];
    int i= low;
    int j=high;

    while(i<j){
        while(pivotElement>=arr[i] && i<high){
            i++;
        }
        while(pivotElement<arr[j] && j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);



    return j;
}

void qs(vector<int>&arr,int low,int high){
    if(low<high){
        int pivotEle = pivot(arr,low,high);
        qs(arr,low,pivotEle-1);
        qs(arr,pivotEle+1,high);
    }
}



int main()
{
    vector<int> arr = {4,6,2,5,7,9,1,3};
    int n = arr.size()-1;

    qs(arr,0,n);

    for(auto x:arr) cout<<x<<" ";
    return 0;
}