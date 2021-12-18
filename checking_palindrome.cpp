#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string check){
    // 1. writing minimal base case
    if(check.size() < 2)  return true;
    
    // 2. calling same function but with reduced case statement inorder to reach base case
    if(check[0] == check[check.size()-1]){
      return isPalindrome(check.substr(1,check.size()-2));
    }

    // some logic in-between anywhere this function
    return false;
}

int main() 
{
    string checkString = "vaibhav dwivedi";
    string checkString1 = "ada";
    
    cout<<isPalindrome(checkString)<<endl;
    cout<<isPalindrome(checkString1)<<endl;
}