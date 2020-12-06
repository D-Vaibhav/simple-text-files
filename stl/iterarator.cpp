#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,-200,200,-20};
    
    auto it = v.begin();
    cout<<*it<<"\n";

    it++;
    cout<<*it<<"\n";
    
    auto it2 = v.rbegin();
    cout<<*it2<<"\n";
    
    it2++;
    cout<<*it2<<"\n";
    
    // point ele after the last ele
    auto it3 = v.end();
    cout<<*it3<<"\n";
    
    // point ele preceding to the first ele
    auto it4 = v.rend();
    cout<<*it4<<"\n";
    
    it4++;
    cout<<*it4<<"\n";
    
    it = v.begin();
    cout<<*it<<"\n";
    
    // for fast forwarding the pointer
    advance(it, 5);
    cout<<*it<<"\n";

    return 0;
}
