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
        if(n==1){
            cout<<1<<endl;
            continue ;
        }
        if(n&1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=2;i<=n;i+=2){
            cout<<i<<" "<<(i-1)<<" ";
        }
        cout<<endl;
    }
        
  return 0;
}