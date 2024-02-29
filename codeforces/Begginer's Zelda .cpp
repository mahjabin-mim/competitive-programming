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
        
        map <int,int> map;
        for(int i=0; i<n-1; i++){
          int u,v;
          cin>>u>>v;
          
          map[u]++;
          map[v]++;
        }
        
        int count=0;
        for(auto i:map){
          if(i.second==1){
            count++;
          }
        }
        
        int ans=(count/2)+(count%2);
        cout<<ans<<endl;
    }
        
  return 0;
}