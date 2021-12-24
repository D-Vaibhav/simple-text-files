#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v){
    if(v.size() <= 1) return true;
    if((v.size() == 2) && (v[0] <= v[1])){
      return true;
    }
    
    if(v[0]<=v[1])  return isSorted(vector<int>(v.begin()+1, v.end()));
    
    return false;
}

int main() 
{
    vector<int> v{10, 20, 23, 27, 27, 32, 0};
    cout<<isSorted(v)<<endl;
    
    sort(v.begin(), v.end());
    cout<<isSorted(v)<<endl;

    vector<int> v1{1, 3, 2, -1, 7, 27};
    cout<<isSorted(v1)<<endl;
    
    sort(v1.begin(), v1.end());
    cout<<isSorted(v1)<<endl;
}
