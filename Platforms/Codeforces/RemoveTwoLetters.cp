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
       
       string s;
       cin>>s;
       
       int ans=1;
       
       for(int i=1; i<s.length()-1; i++){
         if(s[i-1] != s[i+1]){
           ans++;
         }
       }
       
       cout<<ans<<"\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	