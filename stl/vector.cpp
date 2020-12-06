#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10,20,30,30,30,70,20,200,-20};
    
    int n = v.size();
    
    sort(v.begin(), v.end());
    
    reverse(v.begin(), v.end());
    
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    v.push_back(10000);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
