#include<iostream>
using namespace std;

// This program compare the array element and if suffix array is max remains its value and if
// not then swap it.

    
int main() {
    
    #ifndef ONLINE_JUDGE // not a part of code used to beautify the code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif   

    int n, arr[n];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    } 
     for(int i=0;i<n;i++){
         if(arr[i+1]<arr[i]){
             arr[i+1]=arr[i];
         }
         cout<<arr[i]<<" ";
        
     }
     
    return 0;
}