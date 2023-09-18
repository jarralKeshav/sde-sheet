#include <bits/stdc++.h>
using namespace std;

vector<int> subset;

void solve(int a[], int n, int index) {
    if(index == n){
        // print the subset
        int len = subset.size();
        for(int i=0; i<len; i++){
            cout << subset[i] << " ";
        }
        cout << "\n";
    }else{
        // cout<<"Index "<<index<<endl;
        subset.push_back(a[index]);
        solve(a, n, index+1);
        subset.pop_back();
        solve(a, n, index+1);
    }
}

int main() {
    int a[] = {1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int startIndex = 0;

    solve(a, n, startIndex);
    return 0;
}