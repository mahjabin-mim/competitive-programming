#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        int b=n+1-a;
        cout<<b<<" ";
      }
      cout<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	