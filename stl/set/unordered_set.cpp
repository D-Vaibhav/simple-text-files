#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    unordered_set<int> s(v.begin(), v.end());
    
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<", ";
    }
    return 0;
}
