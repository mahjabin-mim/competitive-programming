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
       
       string digit;
       cin>>digit;
       
       bool Rflag=false;
       bool Bflag=false;
       
       if(n==1){
         
         if(digit[0]%2==0){
           cout<<"2\n";
         }
         else{
           cout<<"1\n";
         }
       }
       
       else{
         if(n%2!=0){
           for(int i=0; i<n; i+=2){
             
             if(digit[i]%2!=0){
               Rflag=true;
               Bflag=false;
               break;
             }
             else{
               Bflag=true;
             }
           }
         }
         else{
           for(int i=1; i<n; i+=2){
             
             if(digit[i]%2==0){
               Bflag=true;
               Rflag=false;
               break;
             }
             else{
               Rflag=true;
             }
           }
         }
         
         if(Rflag==true){
           cout<<"1\n";
         }
         if(Bflag==true){
           cout<<"2\n";
         }
       }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	