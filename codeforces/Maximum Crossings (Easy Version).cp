#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long t;
    cin>>t;
    while(t--){
        long long n;
	      cin>>n;
	      vector <long long> v(n);
	      for(long long i=0;i<n;i++){
	        cin>>v[i];
	      }
	      
	      long long res=0;
	      for(long long i=0;i<n;i++){
		      for(long long j=i+1;j<n;j++){
			      if(v[i]>=v[j]){
			        res++;
			      }
		      }
	      }
	    cout<<res<<endl;
    }
    return 0;
}