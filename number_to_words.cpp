#include <iostream>
using namespace std;

void spellNumber(string number){
    if(number == "")  return;
    
    // we can also use hashing ie. string s[10] = {"zero","one"...}
    if(number[0] == '0')  cout<<"zero ";
    else if(number[0] == '1')  cout<<"one ";
    else if(number[0] == '2')  cout<<"two ";
    else if(number[0] == '3')  cout<<"three ";
    else if(number[0] == '4')  cout<<"four ";
    else if(number[0] == '5')  cout<<"five ";
    else if(number[0] == '6')  cout<<"six ";
    else if(number[0] == '7')  cout<<"seven ";
    else if(number[0] == '8')  cout<<"eight ";
    else if(number[0] == '9')  cout<<"nine ";
    else if(number[0] == '1')  cout<<"one ";
    else cout<<"xxx ";
    
    spellNumber(number.substr(1));
}

int main() 
{   
    int number;
    cout<<"enter a positive natural number: ";
    cin>>number;
    
    // converting it to string
    string numberInString = to_string(number);
    
    spellNumber(numberInString);
    
    return 0;
}