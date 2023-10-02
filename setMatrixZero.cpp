#include <bits/stdc++.h>
// using namespace std;

int main()
{
    std::vector<std::vector<int>> mat{{0, 1, 2, 0},
                                      {3, 4, 5, 2},
                                      {1, 3, 1, 5}};

    int rSize = mat.size();
    int cSize = mat[0].size();
    int zeroI = 0, zeroJ = 0;
    std::vector<std::vector<int>> v;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if(mat[i][j] == 0){
                std::vector<int> r;
                r.push_back(i);
                r.push_back(j);
                v.push_back(r);
            }

        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            zeroI = v[i][0];
            zeroJ = v[i][1];

                for(int k=0;k< cSize;k++){
                    if(mat[zeroI][k]!=0){
                        mat[zeroI][k]=0;
                    }
                }
                for(int l=0;l< rSize;l++){
                    if(mat[l][zeroJ]!=0){
                        mat[l][zeroJ]=0;
                    }
                }
        }
    }


    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            // if (mat[i][j] == -1)
            // {
            //     mat[i][j] = 0;
            // }
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }
}

