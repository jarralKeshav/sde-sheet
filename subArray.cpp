#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    long long s;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //   vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=arr[i];
            
            if(sum==s){
                cout<<1<<" "<<i<<"\n";
                break;
                
                
            }
            else{
                for(int j=i+1;j<n;j++){
                    sum+=arr[j];
                    
                    if(sum==s){
                        // ans.push_back(i+1);
                        // ans.push_back(j+1);
                        cout<<i<<" "<<j;
                        // return;
                        break;
                        
                    }
                }
            }
        }
}