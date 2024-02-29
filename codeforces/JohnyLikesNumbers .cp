#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    for(int i=k; i<10000000000; i+=k){
      if(i>n){
        cout<<i<<endl;
        break;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	