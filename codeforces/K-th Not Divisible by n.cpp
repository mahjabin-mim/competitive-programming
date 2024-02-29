#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        long long n,k ;
        cin>>n>>k;

        long long ans=k+floor((k-1)/(n-1));
        cout<<ans<<endl;
    }
    
    return 0;
}