#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1 = 5;
    int x2 =2;
    int v1=2;
    int N=20;

    int v2 = x1-x2; //1 m/s
    int step=1;

   for(int i = v1;i<=N*v1;i+=2){
    // cout<<i<<" ";

    if(i%v2==0){
        step++;
    }
    
   }
   cout<<"steps: "<<step<<" ";
   cout<<"speed : "<<v2;



    
   

    return 0;
}
