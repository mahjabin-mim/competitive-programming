#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
      
    while(t--){
      int n,m,k,h;
      cin>>n>>m>>k>>h;
      
      int arr1[n];
      for(int i=0; i<n; i++){
        cin>>arr1[i];
      }
      
      int arr2[n];
      int count=0;
      for(int i=0; i<n; i++){
        arr2[i]=abs(h-arr1[i]);
        if(arr2[i]!=0 && arr2[i]%k==0 && arr2[i]<=k*(m-1)){
          count++;
        }
      }
      cout<<count<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	