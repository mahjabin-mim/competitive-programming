#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
	  cin>>t;
	  while(t--){
	    long long a,b;
      cin>>a>>b;
      if(a==b){
        cout<<0<<" "<<0<<endl;
      }else{
        long long x=abs(a-b);
        cout<<abs(a-b)<<" "<<min(a%x,x-(a%x))<<endl;
      }
	  }
    
  return 0;
}