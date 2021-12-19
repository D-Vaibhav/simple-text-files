#include <iostream>
using namespace std;

// recursion head
void printNaturalNumber(int tillNumber){
    // base case
    if(tillNumber == 0)   return ;
    
    // logic at recursion head
    cout<<tillNumber<<" ";
    // recursive call towards base case
    printNaturalNumber(tillNumber - 1);
}

// recursion tail
void printNaturalNumberReversed(int tillNumber){
    // base case
    if(tillNumber == 0)   return ;
    
    // recursive call towards base case
    printNaturalNumberReversed(tillNumber - 1);
    // logic at recursion head
    cout<<tillNumber<<" ";
}

int main() 
{
    int number = 7;
    
    printNaturalNumber(number);
    cout<<endl;
    printNaturalNumberReversed(number);
    return 0;
}