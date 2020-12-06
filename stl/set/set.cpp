#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    // #1. sorted(ascending)
    // #2. Not repeated
    set<int> s(v.begin(), v.end());
    // set<int, greater<int> > s(v.begin(), v.end()); - descending

    
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ,";
    }
    cout<<"\n";
    
    s.insert(7);
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ,";
    }
    
    return 0;
}
