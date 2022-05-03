#include<bits/stdc++.h>
using namespace std;


int main() {
    
   int t;
   cin >> t;
   int n;
   
   while(t--){
      cin >> n;
      vector <int> v;
      for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
      }
        int save = 0;
     
      sort(v.begin(),v.end());

      for(int i=0;i<n;i++) cout<<v[i] <<" ";
   }
    return 0;
}

