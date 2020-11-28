#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 2, 3, -1, 100, -10, 27, 7, 7, 2};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j; 
    // selection sort = O(n*n)
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(i=0;i<n; cout<<arr[i++]<<" ");
    
    cout<<"\nFind the k-th smallest element\nEnter k :";
    int k;
    cin>>k;
    for(i=0;i<k;i++){
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout<<endl<<arr[k-1];
    
    return 0;
}
