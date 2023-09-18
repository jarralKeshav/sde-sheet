#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    // s.toUpper();
    transform(s.begin(),s.end(),s.begin(),::toupper);
     int len = s.length();
     cout<<"length of string: "<<len<<"\n";
        if(len==0) return true;


        // map<char,int> mp;
        // for(int i=0;i<len;i++){
        //     mp[s[i]]++;
        // }

        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }


        string str;
        for(int i=0;i<len;i++){
            // if(!isalnum(s[i])){
            //     continue;
            // }
            if(isalnum(s[i])){
                str.push_back(s[i]);
            }
        }
        string orig= str;
        reverse(str.begin(),str.end());
        if(str.compare(orig)==0) cout<<"YES\n";
        else cout<<"NO\n";

        // cout<<str<<"\n";
}