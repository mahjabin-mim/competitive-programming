#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      long long n;
      cin>>n;
      
      long long sum=0;
      long long a,b,pos,neg;
      
      a=log2(n);
      b=pow(2,a);
      
      pos=(n*(n+1))/2;
      neg=2*(b*2-1);
      
      sum=pos-neg; 
      cout<<sum<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	