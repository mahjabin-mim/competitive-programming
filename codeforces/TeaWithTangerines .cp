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
      
      int count=0;
      if(n>1 && arr[0]!=arr[n-1]){
        int x;
        x=2*arr[0];
       
        for(int i=n-1; i>0; i--){
          
          if(x<=arr[i]){
            count+=(arr[i]/(x-1));
            if(arr[i]%(x-1)==0){
              count--;
            }
          }
          else{
            break;
          }
        }
      }
      
      cout<<count<<endl;
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	