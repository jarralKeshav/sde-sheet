#include<bits/stdc++.h>
using namespace std;




int main()
{
   int arr[5]= {1,4,6,1,2};
//    int ans=0;
   int maxB =0, maxA=0;
  int minIndex = 4;
    for (int i = 5-1; i > 0 ; i--) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
//    cout<<minI<<" "<<maxI<<endl;
   for(int i=0;i<minIndex;i++){
    maxB = max(maxB,arr[i]);
   }
   for(int i=5-1;i>minIndex;i--){
    maxA = max(maxA,arr[i]);
   }


//    ans = (maxB-arr[minIndex])*maxA;
// cout<<maxB<<endl<<arr[minIndex]<<endl<<maxA;

cout<<minIndex;
//    cout<<ans;

   
    
    
}