#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    
    long long x,y;
    if(m%a==0){
      x=m/a;
    }else{
      x=m/a+1;
    }
    
    if(n%a==0){
      y=n/a;
    }else{
      y=n/a+1;
    }
    
    cout<<x*y<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	