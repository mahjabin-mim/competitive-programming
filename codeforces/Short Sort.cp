#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      string s;
      cin>>s;
      
      if(s=="abc"){
        cout<<"YES\n";
      }else if(s[0]=='a' || s[1]=='b' || s[2]=='c'){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	