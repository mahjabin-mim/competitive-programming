#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int n,b;
       cin>>n;
       
       int a[n+10];
       
       for(int i=1; i<=n; i++){
         cin>>a[i];
       }
        
      for(int i=1; i<=n; i++){
        if(a[i]==1){
          b=a[i];
          b+=1;
          a[i]=b;
        }
      }
      
      for(int i=1; i<n; i++){
        
        int c,d;
        c=a[i+1];
        d=a[i];
        
        if(c%d==0){
          b=a[i+1];
          b+=1;
          a[i+1]=b;
        }
      }
       
      for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
      }
       
       cout<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	