#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l{12,14,13,10,-10};
    
    l.push_back(100);
    l.push_front(-100);
    
    for(auto it = l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    
    // l.reverse();
    l.sort();
    for(auto it = l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    
    l.pop_back();
    l.pop_front();
    
    for(auto it = l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";

    return 0;
}
