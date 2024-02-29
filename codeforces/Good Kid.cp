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
      
      int arr[n];
      int mn=INT_MAX;
      int idx;
      for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<mn){
          mn=arr[i];
          idx=i;
        }
      }
      
      long long ans=1;
      for(int i=0; i<n; i++){
        if(i==idx){
          arr[i]+=1;
        }
        ans*=arr[i];
      }
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	