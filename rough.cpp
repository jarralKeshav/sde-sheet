#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str = "1k20b9";

    string temp ="";
    int sum=0;

    for(char ch:str){
        if(isdigit(ch)){
            temp+=ch;
        }

        else{
            sum += atoi(temp.c_str());
            temp="";
        }
    }
   


    cout<<sum+atoi(temp.c_str())<<" ";
    


}
