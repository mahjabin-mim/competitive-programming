#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      string s;
      cin>>s;
      
      bool flag=true;
      for(int i=0; i<n; i++){
        if(s[i]=='R' || s[i]=='B'){
          flag=false;
          if(i!=0){
            for(int j=i-1; j>=0; j--){
              if(s[j+1]=='R' && s[j]=='?'){
                s[j]='B';
              }else if(s[j+1]=='B' && s[j]=='?'){
                s[j]='R';
              }else{
                break;
              }
            }
          }
          if(i!=n-1){
            for(int j=i+1; j<n; j++){
              if(s[j-1]=='R' && s[j]=='?'){
                s[j]='B';
              }else if(s[j-1]=='B' && s[j]=='?'){
                s[j]='R';
              }else{
                break;
              }
            }
          }
        }
      }
      
      if(flag){
        char c='B';
        s[0]=c;
        for(int i=1; i<n; i++){
          if(s[i-1]=='B'){
            s[i]='R';
            c='B';
          }else{
            s[i]='B';
            c='R';
          }
        }
      }
      
      cout<<s<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	