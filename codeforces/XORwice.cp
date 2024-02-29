#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int a,b;
      cin>>a>>b;
      int x=(a&b);
      cout<<(a^x)+(b^x)<<'\n';
    }
    
    return 0;
}