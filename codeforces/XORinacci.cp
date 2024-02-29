#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int a,b,n;
      cin>>a>>b>>n;
    
      n%=3;
      if(n==0){
        cout<<a<<'\n';
      }else if(n==1){
        cout<<b<<'\n';
      }else{
        cout<<(a^b)<<'\n';
      } 
    }
    
    return 0;
}