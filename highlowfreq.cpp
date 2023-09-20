#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    unordered_map<int, int> mpp;
    int len = v.size();
    for (int i = 0; i < len; i++)
    {
        mpp[v[i]]++;
    }

    int maxFreq = 0, minFreq = len;
    int maxEle = 0, minEle = 0;
    for(auto it:mpp) {
        cout<<it.first<<"-> "<<it.second<<'\n';
    }
    for (auto it : mpp)
    {

        int count = it.second;
        int element = it.first;

        if (count > maxFreq)
        {
            maxEle = element;
            maxFreq = count;
        }
        if(count == maxFreq){
            maxEle = min(maxEle,element);
        }
        if (count < minFreq)
        {
            minEle = element;
            minFreq = count;
        }
        if(count==minFreq){
            minEle = min(minEle,element);
        }
    }

    vector<int> ans;
    ans.push_back(maxEle);
    ans.push_back(minEle);
    for (auto x : ans)
        cout << x << " ";
}