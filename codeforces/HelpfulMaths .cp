#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    string str="";
    for(int i=0; i<s.length(); i++){
      if(s[i]=='+'){
        continue;
      }else{
        str+=s[i];
      }
    }
    
    sort(str.begin(),str.end()); 
    for(int i=0; i<str.length(); i++){
      if(i==str.length()-1){
        cout<<str[i];
      }else{
        cout<<str[i]<<"+";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	