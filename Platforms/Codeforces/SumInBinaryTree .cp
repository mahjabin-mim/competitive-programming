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
       
       long long sum=n;
       long long count=n;
       
       while(count--){
         
         if(n%2==0){
           
           sum+=n/2;
           n=n/2;
         }
         else if(n%2!=0 && n!=1){
           
           n=n-1;
           sum+=n/2;
           n=n/2;
         }
         else if(n==1){
           
           break;
         }
       }
       
       cout<<sum<<endl;
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	