#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int n, a, b, c; 
    cin>>n>>a>>b>>c;
    
    long long ans=0;
    for(int i=0; i<=c; i++){
        for(int j=0; j<=b; j++){
            int temp = 2*(n-2*i-j);
            if(0<=temp && temp<=a)
                ans++;
        }
    }
    cout<<ans<<endl;
        
  return 0;
}