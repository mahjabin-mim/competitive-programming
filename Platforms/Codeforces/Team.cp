#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int count=0;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        char c;
        cin>>c;
        
        if(c=='0'){
          count++;
        }
      }
    }
     
     cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	