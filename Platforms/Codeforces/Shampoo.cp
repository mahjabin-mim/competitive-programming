#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int v,f,m,t;
    cin>>v>>f>>m>>t;
    
    int a=v;
    if(f+m+t == v || v<f){
      cout<<"F\n";
    }
    else{
      for(int i=1; i<=a; i++){
        v=v-f;
        if(v<m){
          cout<<"M"<<endl;
          break;
        }
        v=v-m;
        if(v<t){
          cout<<"T"<<endl;
          break;
        }
        v=v-t;
        if(v<f){
          cout<<"F"<<endl;
          break;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	