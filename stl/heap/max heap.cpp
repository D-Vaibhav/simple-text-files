#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    priority_queue<int> maxHeap(v.begin(), v.end());
    
    maxHeap.push(-700);
    
    while(!maxHeap.empty()){
        cout<<maxHeap.top()<<", ";
        maxHeap.pop();
    }
    
    return 0;
}
