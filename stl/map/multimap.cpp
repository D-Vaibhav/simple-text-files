#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    // #1. sorted
    // #2. only insert({k,v}) can be used
    multimap<int, int> m;
    
    for(int i=0; i<v.size();i++){
        m.insert({v[i], i});
    }
    
    // can't over-write the key, so simply add {k,v} pair to the map
    m.insert({2020, -1});
    
    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<":"<<it->second<<" ,";
    }
    return 0;
}
