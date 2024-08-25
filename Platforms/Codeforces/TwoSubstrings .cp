#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    string s;
    cin>>s;
    
    bool flag=false;
    for(int i=0; i<s.length()-1; i++){
      if(s[i]=='A' && s[i+1]=='B'){
        for(int j=i+2; j<s.length()-1; j++){
          if(s[j]=='B' && s[j+1]=='A'){
            flag=true;
            break;
          }
        }
      }
      else if(s[i]=='B' && s[i+1]=='A'){
        for(int j=i+2; j<s.length()-1; j++){
          if(s[j]=='A' && s[j+1]=='B'){
            flag=true;
            break;
          }
        }
      }
      if(flag){
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
 	 	  		 		 		 	 		 	  	   	 	