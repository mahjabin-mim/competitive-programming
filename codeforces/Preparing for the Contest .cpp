#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        for(int i=n; i>k+1; i--){
            cout<<i<<" ";
        }
        for(int i=1; i<=k+1; i++){
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
        
  return 0;
}