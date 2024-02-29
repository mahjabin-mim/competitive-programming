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
      
      if(n%2==0){
        for(int i=0; i<n-2; i++){
          cout<<2<<" ";
        }
        cout<<1<<" "<<3<<endl;;
      }
      else{
        for(int i=0; i<n; i++){
          cout<<2<<" ";
        }
        cout<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	