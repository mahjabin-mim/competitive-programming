#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int n,a;
       cin>>n;
       
       string s;
       s=to_string(n);
       
       char min='9';
       
       if(n<100){
         cout<<s[s.length()-1]<<"\n";
       }
       else{
         
         for(int i=0; i<=s.length()-1; i++){
           if(s[i]<=min){
             min=s[i];
           }
         }
         
         cout<<min<<endl;
       }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	