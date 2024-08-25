#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int a,b;
    cin>>a>>b;
      
    int ans=a;
    while(a>=b){
      ans=ans+(a/b);
      a=(a/b)+(a%b);
    }
    cout<<ans<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	