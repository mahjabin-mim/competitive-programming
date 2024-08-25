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
      
      int ans=0;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a!=0){
          ans++;
        }
      }
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	