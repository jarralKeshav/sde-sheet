#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ll r;
    ll c;
    ll ele;
    cin >> r >> c;
    ll iele=0,jele=0;
    int count=0;
    int mat[r][c];
    for (ll i = 0; i < r; i++) {
        for (ll j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    cin >> ele;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]>ele){
                iele=i;
                jele=j;
                count=1;
            }
        }

    }
    if(count==1){ cout<<iele<<" "<<jele<<"\n";}
    else cout<<r<<" "<<c<<"\n";

    return 0;
}

