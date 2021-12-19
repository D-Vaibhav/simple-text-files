#include <iostream>
using namespace std;

int evalValue(int number, int power){
    if(power == 0)  return 1;
    if(power == 1)  return number;
    
    int temp;
    
    if(power%2 == 0){
        temp = evalValue(number, power/2);
        return temp*temp;
    }
    else{
        temp = evalValue(number, (power-1)/2);
        return number*temp*temp;
    }
}

int main() 
{
    int number = 2;
    int power = 27;
    
    cout<<evalValue(number, power);
    
    return 0;
}