#include<bits/stdc++.h>

int main(){

    std::vector<std::vector<int>> mat {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rSize = mat.size();
    int cSize = mat[0].size();
    // std::vector<std::vector<int>> ans(rSize,std::vector<int> (cSize, 0));

    for(int i=0;i<rSize-1;i++){
        for(int j=i+1;j<cSize;j++)
        {
            std::swap(mat[i][j],mat[j][i]);

        }
        // std::cout<<"\n";
    }

    // cout<<"\n\n\n";

    // for(int i=0;i<mat.size();i++){
    //     for(int j=0;j<mat[0].size();j++){
    //         mat[i][j] = mat[j][2-i];
    //     }
    // }

    for(int i=0;i<rSize;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    for(int i=0;i<rSize;i++){
        for(int j=0;j<cSize;j++){
            std::cout<<mat[i][j]<<" ";
            // std::cout<<ans[i][j]<<" ";
        }
        std::cout<<"\n";
    }







}