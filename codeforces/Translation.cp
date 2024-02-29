#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string a,b,c="";
    cin>>a;
    cin>>b;
    
    for(int i=b.length()-1; i>=0; i--){
      c+=b[i];
    }
    
    if(a==c){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	