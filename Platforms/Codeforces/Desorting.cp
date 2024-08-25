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
      
      bool flag=true;
      int min=10000000000;
      for(int i=1; i<n; i++){
        if(arr[i-1]<=arr[i]){
          flag=true;
          int dif=arr[i]-arr[i-1];
          if(min>dif){
            min=dif;
          }
        }else{
          cout<<0<<endl;
          flag=false;
          break;
        }
      }
      
      if(flag){
        if(min==0){
          cout<<1<<endl;
        }else{
          int op=(min/2)+1;
          cout<<op<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	