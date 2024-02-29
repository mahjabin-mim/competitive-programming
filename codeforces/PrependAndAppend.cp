#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      string s;
      cin>>s;
      
      bool flag=false;
      for(int i=0; i<n; i++){
        if(s[i]=='0'){
          for(int j=n-1; j>=0; j--){
            if(s[j]=='1'){
              s[j]='a';
              s[i]='b';
              break;
            }else if(s[j]=='0'){
              flag=true;
              break;
            }
          }
          if(flag){
            break;
          }
        }else{
          for(int j=n-1; j>=0; j--){
            if(s[j]=='0'){
              s[j]='a';
              s[i]='b';
              break;
            }else if(s[j]=='1'){
              flag=true;
              break;
            }
          }
          if(flag){
            break;
          }
        }
      }
      
      int count=0;
      for(int i=0; i<n; i++){
        if(s[i]!='a' && s[i]!='b'){
          count++;
        }
      }
      cout<<count<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	