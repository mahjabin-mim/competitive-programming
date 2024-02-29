#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,k;
      cin>>n>>k;
      
      string s;
      cin>>s;
      
      int count=0;
      for(int i=0; i<n; i++){
        if(s[i]=='B'){
          count++;
          i+=k-1;
        }
      }
      
      cout<<count<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	