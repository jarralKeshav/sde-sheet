


#include<bits/stdc++.h>
using namespace std;

vector<int> printLeadersBruteForce(int a[], int n) {

//  int n = a.size();
  vector<int> ans;
  // ans.push_back(a[n-1]);

  int max = a[n-1];
  ans.push_back(a[n-1]);

  for(int i=n-2;i>=0;i--){
    if(a[i]>max){
        ans.push_back(a[i]);
        max = a[i];
    }
  }
  sort(ans.begin(),ans.end());
  return ans;
}

int main() {
    
  // Array Initialization.
  int n = 4;
  int arr[n] = {1,2,2,1};

  vector<int> ans = printLeadersBruteForce(arr,n);
  int len = ans.size();
  for(int i = 0;i<len;i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}

