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
      
      if((s[0]=='y' || s[0]=='Y') && 
         (s[1]=='e' || s[1]=='E') && 
         (s[2]=='s' || s[2]=='S')){
           cout<<"YES"<<endl;
         }
      else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	