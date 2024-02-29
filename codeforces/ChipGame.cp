#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int n,m;
       cin>>n>>m;
       
       if(n%2==0 && m%2!=0 || n%2!=0 && m%2==0){
         cout<<"Burenka\n";
       }
       else{
         cout<<"Tonya\n";
       }
       
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	