#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      
      long long n,k;
      cin>>n>>k;
      
      long long arr[n];
      for(long long i=0; i<n; i++){
        cin>>arr[i];
      }
      
      sort(arr,arr+n);
      long long op=0,count=1;
      for(int i=1; i<n; i++){
        int a=abs(arr[i-1]-arr[i]);
        if(a<=k){
          count++;
        }else{
          if(op<=count){
            op=count;
          }
          count=1;
        }
      }
      
      if(op<=count){
        op=count;
      }
      cout<<n-op<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	