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
      
      int count=0,max=0;
      int ind;
      while(n--){
        int a,b;
        cin>>a>>b;
        count++;
        
        if(a<=10 && max<=b){
          max=b;
          ind=count;
        }
      }
      
      cout<<ind<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	