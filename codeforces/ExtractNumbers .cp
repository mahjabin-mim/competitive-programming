#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    string a="",b="";
    string c="";
    
    for(int i=0; i<s.length(); i++){
      if(s[i]==';' || s[i]==','){
        
        if(c==""){
          b+=',';
        }
        else if(c=="0"){
          a+=c;
          c="";
          a+=',';
        }
        else{
          bool flag=true;
          for(int j=0; j<c.length(); j++){
            if(isalpha(c[j]) || c[0]=='0' || c[j]=='.'){
              b+=c;
              c="";
              b+=',';
              flag=false;
              break;
            }
          }
          if(flag){
            a+=c;
            c="";
            a+=',';
          }
        }
        
      }else{
        c+=s[i];
      }
    }
    
    if(c!=""){
      if(c=="0"){
        a+=c;
        c="";
        a+=',';
      }
      else{
        bool flag=true;
        for(int j=0; j<c.length(); j++){
          if(isalpha(c[j]) || c[0]=='0' || c[j]=='.'){
            b+=c;
            c="";
            b+=',';
            flag=false;
            break;
          }
        }
        if(flag){
          a+=c;
          c="";
          a+=',';
        }
      }
    }
   
    if(s[s.length()-1]==';' || s[s.length()-1]==','){
      b+=',';
    }
   
    if(a==""){
      cout<<"-"<<endl;
    }else{
      cout<<'"'<<a.substr(0, a.length()-1)<<'"'<<endl;
    }
    
    if(b==""){
      cout<<"-"<<endl;
    }else{
      cout<<'"'<<b.substr(0, b.length()-1)<<'"'<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	