#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int count,problem=0;
    for(int i=0; i<n; i++){
      count=0;
      for(int j=0; j<3; j++){
        char c;
        cin>>c;
        if(c=='1'){
          count++;
        }
      }
      if(count>=2){
        problem++;
      }
    }
    
    cout<<problem<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	