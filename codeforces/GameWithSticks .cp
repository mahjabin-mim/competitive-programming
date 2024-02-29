#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=1; i<=100; i++){
      if(n==1 || m==1){
        if(i%2!=0){
          cout<<"Akshat"<<endl;
        }else{
          cout<<"Malvika"<<endl;
        }
        break;
      }else{
        n--;
        m--;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	