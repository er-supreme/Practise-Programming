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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]) {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
  
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}