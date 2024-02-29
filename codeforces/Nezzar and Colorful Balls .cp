#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);
#define FOR(a,b)	for(long long i=a;i<b;i++)

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    
    while(t--){
      long long n;
	    cin>>n;
	    map<long long,long long> m;
	    FOR(0,n){
		    long long a;
		    cin>>a;
		    m[a]++;
	   }
	   
	   long long cnt=1;
	   for(auto u:m) cnt=max(cnt,u.second);
	      cout<<cnt<<endl;
      }
    
  return 0;
}