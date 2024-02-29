#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n=3;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      
      sort(arr,arr+n);
      cout<<arr[1]<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	