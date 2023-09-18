#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int originalNo = n;
    int len =0;
    
    len = log10(n)+1;
    // cout<<len;
    int sumOfPow =0;
    while(n!=0){
        int digit = n%10;
        sumOfPow += pow(digit,len);
        n/=10;
    }

    // cout<<sumOfPow;
    if(sumOfPow==originalNo) cout<<"true\n";
    else cout<<"false\n";



    
}