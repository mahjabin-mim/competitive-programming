#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int a, b;   
      cin >> a >> b;
    
      if(a>b){
        swap(a,b);
      }
      long long temp = b-a;
      long long ans = temp/5;
      temp = temp % 5;
      ans += temp/2;
      temp = temp%2;
      ans += temp;
      cout<<ans<<endl;
    }
        
  return 0;
}