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
       bool flag=true;
       
       for(int i=0; i<n; i++){
         cin>>arr[i];
       }
       
       sort(arr,arr+n);
      
      if(arr[0]!=0){
        flag=false;
      }
       
      else{
        
        for(int i=0; i<n-1; i++){
            
          if(arr[i]!=arr[i+1] && arr[i]+1!=arr[i+1]){
            flag=false;
            break;
          }
        }
        
        if(flag){
          
          int alphaSize = arr[n-1]+1;
          int alpha[alphaSize];
          
          memset(alpha,0,sizeof alpha);
          for(int i=0; i<n; i++){
            
            alpha[arr[i]]++;
          }
          
          for(int i=0; i<alphaSize-1; i++){
            
            if(alpha[i]<alpha[i+1]){
              flag=false;
              break;
            }
          }
        }
      }
      
      if(flag==true){
        cout<<"Yes\n";
      }
      else{
        cout<<"No\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	