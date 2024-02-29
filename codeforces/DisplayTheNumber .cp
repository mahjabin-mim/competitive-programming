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
      
      if(n%2==0){
        int a=n/2;
        for(int i=0; i<a; i++){
          cout<<1;
        }
        cout<<endl;
      }
      else if(n%2==1){
        cout<<7;
        int a=(n/2)-1;
        for(int i=0; i<a; i++){
          cout<<1;
        }
        cout<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	