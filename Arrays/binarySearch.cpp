#include <iostream>
using namespace std;

 int binarySearch(int arr[],int n,int k) {
           
 }

int main()
{

#ifndef ONLINE_JUDGE // not a part of code used to beautify the code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif   

    int n,k,arr[n];
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }    
    cin>>k;   
    cout<<binarySearch(arr,n,k)<<endl;
        
    return 0;
}
