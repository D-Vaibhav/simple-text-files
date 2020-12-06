#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};

    // Time complexity of unordered_map operations is O(1)
    // #1. no repeated elements
    // #2. both slicing and insert({k,v}) can be used
    unordered_map<int, int> m;
    
    for(int i=0; i<v.size();i++){
        m[v[i]]++;
    }
    
    m[7] = 10;
    m.insert({2020, -1});
    
    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<":"<<it->second<<" ,";
    }
    return 0;
}
