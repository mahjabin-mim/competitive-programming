#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    char grid='L';
    for(int i=0; i<n; i++){
      //cout<<grid<<endl;
      if(s[i]!=grid){
        k--;
      }else{
        if(grid=='L'){
          grid='R';
        }else{
          grid='L';
        }
      }
    }
    
    if(k<0){
      cout<<"0"<<endl;
    }else{
      cout<<k<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	