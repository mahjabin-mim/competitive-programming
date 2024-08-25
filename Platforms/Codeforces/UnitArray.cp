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
       
       int pos=0;
       int neg=0;
       
       for(int i=0; i<n; i++){
         
         if(arr[i]<0){
           neg++;
         }
         else{
           pos++;
         }
       }
       
       int op=0;
       for(int i=0; i<n; i++){
         
         if(neg>pos){
           op++;
           neg--;
           pos++;
         }
         else if(neg==pos && neg%2==0){
           break;
         }
         else if(neg<=pos && neg%2!=0){
           op++;
           break;
         }
       }
       
       cout<<op<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	