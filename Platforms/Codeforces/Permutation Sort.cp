#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
   
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        bool isSorted=1;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if(arr[i]!=i){
              isSorted=0;
            }
        }
        
        if(isSorted){
          cout<<0<<endl;
        }else if(arr[1]==1 || arr[n]==n){
          cout<<1<<endl;
        }else if(arr[n]==1 && arr[1]==n){
          cout<<3<<endl;
        }else{
          cout<<2<<endl;
        }
    }
    
    return 0;
}