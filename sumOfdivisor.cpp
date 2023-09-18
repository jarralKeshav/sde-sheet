#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
      int n;
    cin>>n;
    if(n==1) return false;
	if(n==2) return true;
	else if(n==3) return true;
	else if(((n+1)%6)==0) return true;
	else if(((n-1)%6)==0) return true;
	else return false;
}

int main(){

    int n;
    cin>>n;
   
   
}