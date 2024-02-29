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
      
      string s1,s2;
      cin>>s1;
      cin>>s2;
      
      bool flag=true;
      for(int i=0; i<n; i++){
        if(s1[i]!=s2[i]){
          if(s1[i]=='G'){
            s1[i]='B';
          }else if(s1[i]=='B'){
            s1[i]='G';
          }
        }
      }
      
      if(s1==s2){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	