#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       long long n;
       cin>>n;
       
       long long sum=0;
       long long op=0;
       long long arr[n];
       
       for(int i=0; i<n; i++){
         
         cin>>arr[i];
         
         sum+=abs(arr[i]);
       }
       
      for(int i=0; i<n; i++){
         
        if(arr[i]<0){
          op++;
          
          while(i<n){
            if(arr[i]>0){
              break;
            }
            i++;
          }
        }
      }
       
      cout<<sum<<" "<<op<<endl;
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	