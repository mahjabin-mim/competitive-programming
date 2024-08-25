#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       char c;
       int r;
       bool flag=false;
       
       for(int j=1; j<=8; j++){
         
         r=0;
         for(int i=1; i<=8; i++){
          cin>>c;
          
          if(c=='R'){
            r++;
            
            if(r==8){
              flag=true;
            }
          }
        }
       }
      
      if(flag==true){
        cout<<"R\n";
      }else{
        cout<<"B\n";
      }
        
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	