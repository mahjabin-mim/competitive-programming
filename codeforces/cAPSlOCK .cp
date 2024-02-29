#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int count=0;
    for(int i=1; i<s.length(); i++){
      if(isupper(s[i])){
        count++;
      }
    }
    
    int size=s.length()-1;
    if(count==size){
      if(islower(s[0])){
        char a = toupper((s[0]));
        cout<<a;
        for(int i=1; i<s.length(); i++){
          char b = tolower(s[i]);
          cout<<b;
        }
      }else{
        for(int i=0; i<s.length(); i++){
          char b = tolower(s[i]);
          cout<<b;
        }
      }
    }
    else{
      cout<<s<<endl;;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	