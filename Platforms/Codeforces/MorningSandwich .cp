#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      
      int b,c,h;
      cin>>b>>c>>h;
      
      int a=c+h;
      if(b<=a){
        cout<<b+(b-1)<<endl;
      }else{
        cout<<a+(a+1)<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	