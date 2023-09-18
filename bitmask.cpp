#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {1,2,3};
    int len = 3;
    for(int i=1;i<(1<<len);i++){
        for(int j=0;j<len;j++){
            if((i & (1<<j)) !=0){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }    
}