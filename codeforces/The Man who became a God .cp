#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
      
    while(t--){
      int n,k;
      cin>>n>>k;
      
      int arr1[n];
      for(int i=0; i<n; i++){
        cin>>arr1[i];
      }
      
      int arr2[n-1];
      for(int i=1; i<n; i++){
        arr2[i-1]=abs(arr1[i]-arr1[i-1]);
      }
      sort(arr2,arr2+(n-1));
      
      int sum=0;
      for(int i=0; i<n-k; i++){
        sum+=arr2[i];
      }
      cout<<sum<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	