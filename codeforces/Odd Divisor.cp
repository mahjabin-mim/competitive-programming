#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      long long n;
      cin>>n;
    
      if((n&(n-1))==0){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	