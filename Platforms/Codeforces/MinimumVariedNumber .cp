#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int s;
       cin>>s;
       
       int n=0;
       string str="";
       for(int i=9; i>=1; i--){
         
         
         if((n+i)<=s){
           
           n+=i;
           str+=to_string(i);
         }
       }
       
       sort(str.begin(),str.end());
       cout<<str<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	