#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    // passing two more arguments
    priority_queue<int, vector<int>, greater<int> > minHeap(v.begin(), v.end());
    
    minHeap.push(-700);
    
    while(!minHeap.empty()){
        cout<<minHeap.top()<<", ";
        minHeap.pop();
    }
    
    return 0;
}
