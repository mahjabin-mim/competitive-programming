#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    
    while(t--){
      
      long long n;
      cin>>n;
      
      long long edge,row,col,rem;
      
      col=sqrt(n);
      row=n/col;
      rem= n%col;
      
      if(rem != 0){
        edge= col*2 + (row+1)*2;
        cout<<edge<<endl;
      }else{
        edge= col*2 + row*2;
        cout<<edge<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	