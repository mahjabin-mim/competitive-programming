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
      
      if(n%2020==0 || n%2021==0){
        cout<<"YES\n";
      }
      else if(n%2020!=0){
        int a=n/2020;
        int b=n%2020;
        if(a>b){
          cout<<"YES\n";
        }else{
          cout<<"NO\n";
        }
      }
      else{
        cout<<"NO\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	