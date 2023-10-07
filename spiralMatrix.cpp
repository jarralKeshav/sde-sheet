#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>matrix ={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

        int row = matrix.size();
        int col = matrix[0].size();

        int startRow = 0;
        int startCol =0;
        int endCol = col-1;
        int endRow = row-1;


        int total=row*col;
        int count=0;
        vector<int> ans;

        while(count<total){


            for(int i=startCol;i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;


            for(int i=startRow;count<total && i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
                count++;

            }
            endCol--;

            for(int i=endCol;count<total && i>=startCol; i--){
                ans.push_back(matrix[endRow][i]);
                count++;

            }
            endRow--;

            for(int i=endRow;count<total && i>=startRow;i--){
                ans.push_back(matrix[i][startCol]);
                count++;

            }

            startCol++;






        }
        for(auto x:ans) cout<<x<<" ";















    return 0;
}