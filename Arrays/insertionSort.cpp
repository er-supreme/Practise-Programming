#include<iostream>
using namespace std;

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
     for(int i=1;i<n;i++){
         int curr=arr[i];
         int j=i-1;
         while(arr[j]>curr && j>=0){
             arr[j+1]=arr[j];
             j--;           
         
         }
         arr[j+1]=curr;
     }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}