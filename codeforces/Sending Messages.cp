#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
	  cin>>t;
	  while(t--){
	    long long n,f,a,b;
		  cin>>n>>f>>a>>b;
		  
		  long long p,s;
		  p=s=0;
		  for(long long i=1;i<=n;i++){
		    long long x;
			  cin>>x;
			  s+=min(a*(x-p),b);
			  p=x;
		  }
		  
		  if(s<f)
			  cout<<"YES"<<endl;
		  else
			  cout<<"NO"<<endl;
	}
    
  return 0;
}