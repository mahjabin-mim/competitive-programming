#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    int sum=0;
    while(t--){
      
      for(int i=1; i<=7; i++){
        int a;
        cin>>a;
        sum+=a;
      }
      
      cout<<sum<<" ";
      sum=0;
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	