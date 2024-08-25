#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int n;
       cin>>n;
       
       int arr[n];
       for(int i=0; i<n; i++){
         cin>>arr[i];
       }
       
       sort(arr, arr+n);
      
      int count=0;
      int j=0;
      
      for(int i=n-1; i>=n/2; i--){
        count+=arr[i]-arr[j];
        j++;
      }
      
      cout<<count<<endl;
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	