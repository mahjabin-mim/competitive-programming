#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int countU=0,countL=0;
    for(int i=0; i<s.length(); i++){
      if(isupper(s[i])){
        countU++;
      }else{
        countL++;
      }
    }
    
    if(countU>countL){
      for(int i=0; i<s.length(); i++){
        char a = toupper(s[i]);
        cout<<a;
      }
    }else{
      for(int i=0; i<s.length(); i++){
        char a = tolower(s[i]);
        cout<<a;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	