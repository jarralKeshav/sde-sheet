#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,7,11,15};
    int len = v.size();
    int sum =9;
    int countI=0,countJ=0;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(v[i]+v[j]==sum){
               countI = i;
               countJ=j;
            }
        }
    }
    cout<<countI<<" "<<countJ<<endl;



    return 0;

}