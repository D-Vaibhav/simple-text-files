#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    // automatically it'll arrange in decreasing order
    priority_queue<int> pq(v.begin(), v.end());
    
    pq.push(-700);
    
    while(!pq.empty()){
        cout<<pq.top()<<", ";
        pq.pop();
    }
    
    return 0;
}
