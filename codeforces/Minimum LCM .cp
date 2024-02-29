#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int ans(int n){
    for(int i =2 ;i<=sqrt(n);i++){
        if(n%i==0){
            return n/i;
        }
    }
    return 1;
 
}

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }else{
            cout<<ans(n)<<" "<<n-ans(n)<<endl;
        }
    }
        
  return 0;
}