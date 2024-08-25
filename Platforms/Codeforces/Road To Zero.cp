#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      long long x,y,a,b;
      cin>>x>>y>>a>>b;
      
      if(x==0 && y==0){
        cout<<0<<endl;
      }else{
        long long ans=0;
        if(x!=y){
          ans=abs(x-y);
          ans*=a;
        }
        
        long long mn=min(x,y);
        long long a1=(mn*a)*2;
        long long b1=mn*b;
        mn=min(a1,b1);
        ans+=mn;
        cout<<ans<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	