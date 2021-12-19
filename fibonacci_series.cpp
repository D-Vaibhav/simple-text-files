#include <iostream>
using namespace std;

int fibonacciSeriesNumber(int index){
    // base case
    if(index == 0)   return 0;
    if(index == 1)   return 1;
    
    // recursive call towards base case
    return fibonacciSeriesNumber(index - 1) + fibonacciSeriesNumber(index - 2);
}



int main() 
{
    int index = 7;
    
    int n = fibonacciSeriesNumber(index);
    cout<<n<<endl;
    
    n = fibonacciSeriesNumber(27);
    cout<<n;
    
    return 0;
}