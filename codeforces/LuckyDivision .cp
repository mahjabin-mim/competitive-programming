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
      if(s[i]!='7' && s[i]!='4'){
        flag=true;
        break;
      }
    }
    
    if(flag){
      int n=stoi(s);
      for(int i=1; i<n; i++){
        if(n%i==0){
          if(i==4 || i==44 || i==444){
            cout<<"YES\n";
            flag=false;
            break;
          }
          else if(i==7 || i==77){
            cout<<"YES\n";
            flag=false;
            break;
          }
          else if(i==47 || i==74 || i==444 || i==447 || i==474 ||i==477){
            cout<<"YES\n";
            flag=false;
            break;
          }
        }
        
        if(flag==false){
          break;
        }
      }
      
      if(flag){
        cout<<"NO\n";
      }
    }
    else{
      cout<<"YES\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	