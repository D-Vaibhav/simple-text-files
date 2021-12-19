#include <iostream>
using namespace std;

int evaluateNumberPower(int number, int power){
    if(power == 0)  return 1;
    
    return number * evaluateNumberPower(number, power - 1);
}

int main() 
{   
    int number = 2;
    int power = 7;
    
    cout<<evaluateNumberPower(number, power)<<endl;
    cout<<evaluateNumberPower(power, number)<<endl;
    
    return 0;
}