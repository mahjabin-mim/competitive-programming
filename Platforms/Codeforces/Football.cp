#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int zero=0,one=0;
    for(int i=0; i<s.length(); i++){
      if(s[i]=='0'){
        zero++;
        if(one>=7){
          break;
        }
        one=0;
      }else if(s[i]=='1'){
        one++;
        if(zero>=7){
          break;
        }
        zero=0;
      }
    }
    
    if(one>=7 || zero>=7){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	