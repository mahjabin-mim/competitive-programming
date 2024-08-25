#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
      long long a, b; 
      cin>>a>>b;
      long long g = __gcd(a, b);
      long long x = a*b/g;
      if(x==b){
        x*=b/a;
      }
      cout<<x<<endl;;
    }
        
  return 0;
}