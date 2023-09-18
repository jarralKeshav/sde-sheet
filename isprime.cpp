#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool ans=true;
    for(int i=2;i<=sqrt(n);i++){

        if(n%i==0) ans = false;
        // else ans = false;


    }
    if(ans==false) cout<<"no";
    else cout<<"yes";
}