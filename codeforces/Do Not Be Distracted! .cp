#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    
    while(t--){
      long long n;
      cin>>n;
      string x,ans="YES";
      cin>>x;
      map <int,int> mp;
      for(int i =0; i<n; i++){
        if(mp[x[i]]!=0 && abs(mp[x[i]]-(i+1))!=1){
          ans="NO";
          break;
        }
        mp[x[i]]=i+1;
      }
      cout<<ans<<endl;
      mp.clear();
    }
    
  return 0;
}