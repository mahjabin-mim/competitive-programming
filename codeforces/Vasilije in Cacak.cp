#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
  optimized
  int t;
  cin>>t;
  
  while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
    
    long long mn=k*(k+1)/2;
    long long dif=n-k;
    long long mx=n*(n+1)/2 - dif*(dif+1)/2;
    
    if(x<mn || x>mx){
      cout<<"NO\n";
    }else{
      cout<<"YES\n";
    }
  }
        
  return 0;
}