#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    // Time complexity of map operations is O(Log n)
    // #1. sorted a/c to key 
    // #2. no repeated elements
    // #3. both slicing and insert({k,v}) can be used
    map<int, int> m;
    
    for(int i=0; i<v.size();i++){
        m[v[i]]++;
    }
    
    // can overwrite so, won't add a new {k,v} pair in case if k is repeated
    m[7] = 10;
    
    // can't over-write the key, so simply add {k,v} pair to the map
    m.insert({2020, -1});
    
    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<":"<<it->second<<" ,";
    }
    return 0;
}
