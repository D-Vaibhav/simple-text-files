#include <iostream>
using namespace std;

int factorial(int number){
    // base case
    if(number == 1)   return 1;
    
    // recursive call towards base case
    return number * factorial(number-1);
}

// global variable
int numberfactorial = 1;
void factorialWithoutReturn(int number){
    if(number == 1) return;
    
    // global variable are not stored in recursion stack tray
    numberfactorial *= number;
    factorialWithoutReturn(number-1);
}

int main() 
{
    int number = 7;
    
    cout<<factorial(number)<<endl;
    
    factorialWithoutReturn(number);
    cout<<numberfactorial;
    return 0;
}