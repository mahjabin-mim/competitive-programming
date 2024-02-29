#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    long long t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
 
        for(int i=1; i<=n-1; i++){
          cout<<i<<" "<<i+1<<endl;
        }
 
        int last=n-1;
        while(q--){
          int x; 
          cin>>x;
          if(last==x){
             cout<<"-1 -1 -1"<<endl;
          }else{
            cout<<n<<" "<<last<<" "<<x<<endl;
            last=x;
          }
        }
    }
        
  return 0;
}