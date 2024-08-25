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
      
      int max=0;
      for(int i=n-1; i>0; i--){
        if(arr[i]<arr[i-1]){
          for(int j=0; j<i; j++){
            if(arr[j]>max){
              max=arr[j];
            }
          }
        }
      }
      cout<<max<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	