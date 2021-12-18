#include <bits/stdc++.h>
using namespace std;

void reversedName(string name){
    // 1. writing minimal base case
    if(name == ""){
      return ;
    }
    
    // 2. calling same function but with reduced case statement inorder to reach base case
    reversedName(name.substr(1));

    // some logic in-between anywhere this function
    cout<<name[0];
}

int main() 
{
    string fullName = "vaibhav dwivedi";
    reversedName(fullName );
}