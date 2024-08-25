#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    bool flag=false;
    for(int i=0; i<s.length(); i++){
      if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        flag=true;
        break;
      }
    }
    
    if(flag){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	