#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while (t--){
      int n;
      cin>>n;
      
      int mn=INT_MAX;
      int idx;
      for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        if(n%2==0 && x<mn){
          mn=x;
          idx=i;
        }
      }
      
      if(n%2!=0 || idx%2==0){
        cout<<"Mike\n";
      }else{
        cout<<"Joe\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	