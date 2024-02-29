#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int n,add=0,rem=0;
       cin>>n;
       
       for(int i=1; i<=n; i++){
         add+=i;
       }
       
       rem = add%n;
       
       if(rem == 0){
         for(int i=1; i<=n; i++){
           cout<<i<<" ";
         }
         cout<<endl;
       }
       else{
         cout<<1+rem<<" ";
         for(int i=2; i<=n; i++){
           cout<<i<<" ";
         }
         cout<<endl;
       }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	