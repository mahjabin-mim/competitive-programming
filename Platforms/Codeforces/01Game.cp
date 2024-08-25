#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       string s;
       cin>>s;
       
       int a=0,b=0;
       
       for(int i=0; i<=s.length()-1; i++){
         
         if(s[i]=='1'){
           a++;
         }else{
           b++;
         }
       }
       
       if(a%2!=0 || b%2!=0){
         
          if(a%2!=0 && b%2!=0){
            cout<<"DA\n";
          }
          
          else if(a%2!=0){
            if(a<=b){
              cout<<"DA\n";
            }
            else{
              cout<<"NET\n";
            }
          }
          
          else if(b%2!=0){
             if(b<=a){
               cout<<"DA\n";
             }
             else{
               cout<<"NET\n";
             }
          }
       }
       
       else{
         cout<<"NET\n";
       }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	