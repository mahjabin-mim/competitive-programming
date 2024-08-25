#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    int num=0;
    while(t--){
      
      string s;
      cin>>s;
      
      for(int i=0; i<3; i++){
        
        if(s[i]=='+'){
          num++;
          break;
        }else if(s[i]=='-'){
          num--;
          break;
        }
      }
    }
    
    cout<<num<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	