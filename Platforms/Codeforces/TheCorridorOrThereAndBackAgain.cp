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
      
      int room,sec;
      int ans=INT_MAX;
      for(int i=0; i<n; i++){
        int d,s;
        cin>>d>>s;
        sec=s/2;
        if(s%2==0){
          sec-=1;
        }
        room=d+sec;
        ans=min(ans,room);
      }
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	