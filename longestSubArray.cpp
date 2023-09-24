#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int n;
    cin>>n;
    long long k;
    cin>>k;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        a.push_back(m);
    }


     long long sum=0;
    int start=0,end=0;
    // int len=0;
    int lenMax=0;

    for(end=0;end<n;end++){
        sum+=a[end];
        cout<<"Sum: "<<sum<<" ";

        if(sum==k){
            
            lenMax = max(lenMax,end-start+1);
            cout<<"Len Max: "<<lenMax<<" ";
        }
        else if(sum>k && end>start){
            sum-=a[start];
            start++;
            // len=0;
        }



    }
    // return lenMax;
    cout<<"lenMax: "<<lenMax<<endl;
}


