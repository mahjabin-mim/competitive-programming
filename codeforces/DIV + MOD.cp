#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
      long long l,r,a;
      cin>>l>>r>>a;
      long long n = abs((a-1)-(l%a));
      if(r%a==a-1){
        cout<<(r/a)+(r%a)<<endl;
      }else if(r-r%a-1 >= l){
        r=r-r%a-1;
        cout<<(r/a)+(r%a)<<endl;
      }else{
        cout<<r/a+r%a<<'\n';
      }
    }
        
  return 0;
}