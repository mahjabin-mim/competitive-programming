#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
      int n;cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      int mx=a[0],mn=a[0];
      for(int i=1;i<n;i++)
      {
        mx|=a[i];
        mn&=a[i];
      }
      cout<<(mx-mn)<<'\n';
    }
        
  return 0;
}