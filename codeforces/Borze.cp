#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    for(int i=0; i<s.length(); i++){
      
      if(s[i]=='-' && s[i+1]=='-' && i!=s.length()-1){
        cout<<2;
        i+=1;
      }else if(s[i]=='-' && s[i+1]=='.' && i!=s.length()-1){
        cout<<1;
        i+=1;
      }else if(s[i]=='.' && s[i-1]=='.'){
        cout<<0;
      }else if(s[i]=='.' && s[i-1]=='-' && s[i-2]=='-' && i>1){
        cout<<0;
      }else if(s[i]=='.' && i==0){
        cout<<0;
      }
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	