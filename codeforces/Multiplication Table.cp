#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,x;
    cin>>n>>x;
    int count=0;
      
    for(int i=1; i<=n; i++){
      if(x%i==0 && x/i<=n){
        count++;
      }
    }
    cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	