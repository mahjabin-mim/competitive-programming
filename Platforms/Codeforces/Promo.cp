#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long n,q;
    cin>>n>>q;
    
    long long arr[n+1];
    arr[0]=0;
    for(long long i=1; i<=n; i++){
      cin>>arr[i];
    }
    sort(arr,arr+(n+1));
    for(long long i=1; i<=n; i++){
      arr[i]=arr[i-1]+arr[i];
    }
    
    while(q--){
      long long x,y;
      cin>>x>>y;
      
      long long a=n-(x-y);
      long long b=a-y;
      long long ans=arr[a]-arr[b];
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	