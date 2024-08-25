#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    string s;
    cin>>s;
    
    if(t%2!=0){
      cout<<"NO\n";
    }
    else{
      
      bool flag=true;
      for(int i=0; i<s.length(); i++){
        if(s[i]!='7' && s[i]!='4'){
          flag=false;
          break;
        }
      }
      
      if(flag){
        int a=0;
        for(int i=0; i<(s.length()/2); i++){
          a+=s[i]-'0';
        }
        int b=0;
        for(int i=(s.length()/2); i<s.length(); i++){
          b+=s[i]-'0';
        }
   
        if(a==b){
          cout<<"YES\n";
        }else{
          cout<<"NO\n";
        }
      }
      else{
        cout<<"NO\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	