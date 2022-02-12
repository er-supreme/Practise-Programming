#include <iostream>
using namespace std;

// make starting pointer  and ending pointer
// make while loop and find the mid point


 int binarySearch(int arr[],int n,int k) {

     int s=0, e=n;
     int mid;
     while(s<=e) {
         mid=(s+e)/2;
         if(arr[mid]==k){
             return mid;
         }
         else if(arr[mid]>k) {
             e=mid-1;

         }
         else{
             s=mid+1;
         }

     }
     return -1;    
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
