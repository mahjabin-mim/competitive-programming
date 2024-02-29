#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int x=(k*l)/nl;
    int y=c*d;
    int z=p/np;
    
    int ans=min(x,y);
    ans=min(ans,z);
    ans/=n;
    cout<<ans<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	