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
	    
      long long x=0;
      for(int i=1; i<=n-3; i++){
        cout<<i<<' ';
        x^=i;
      }
      cout<<(1ll * 1 << 29) <<" "<< (1ll * 1 << 30)<<" "<< (x ^ (1ll * 1 << 29)^ (1ll * 1 << 30)) << '\n';
	  }
    
  return 0;
}