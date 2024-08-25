#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      long long a,b;
      cin>>a>>b;
      
      if(b==1){
        cout<<"NO"<<endl;
      }else{
        long long x = a;
        long long y = a*b;
        long long z = (a*b)+a;
      
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	