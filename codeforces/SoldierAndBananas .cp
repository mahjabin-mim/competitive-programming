#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long k,n,w;
    cin>>k>>n>>w;
    
    long long total=0;
    for(int i=1; i<=w; i++){
      total+=(i*k);
    }
    
    long long borrow=total-n;
    if(borrow>0){
      cout<<borrow<<endl;
    }else{
      cout<<0<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	