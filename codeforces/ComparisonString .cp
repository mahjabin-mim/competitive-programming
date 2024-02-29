#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    
    while(t--){
      
      int n;
      cin>>n;
      
      string s;
      cin>>s;
      
      int g=0, l=0, stream=0;
      for(int i=0; i<n; i++){
        
        if(s[i]=='>'){
          if(l>=stream){
            stream=l;
          }
          g++;
          l=0;
        }else{
          if(g>=stream){
            stream=g;
          }
          l++;
          g=0;
        }
      }
      
      if(l<g && stream<g){
        stream=g;
      }else if(g<l && stream<l){
        stream=l;
      }
      cout<<stream+1<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	