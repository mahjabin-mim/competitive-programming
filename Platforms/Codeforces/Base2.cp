#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    
    int arr[64+10];
    unsigned long long ans=0;
    
    for(int i=0; i<64; i++){
      cin>>arr[i];
    }
    
    for(int i=0; i<64; i++){
     
      ans+=arr[i]*(unsigned long long) pow(2,i);
    }
    
    cout<<ans<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	