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
      
      string str=s;
      char a='0';
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(s[i]==str[j]){
            str[j]=a;
          }
        }
        if(a=='0'){
          a='1'; 
        }else{
          a='0';
        }
      }
      
      bool flag=true;
      for(int i=0; i<n-1; i++){
        if(str[i]==str[i+1]){
          flag=false;
          break;
        }
      }
      
      if(flag){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	