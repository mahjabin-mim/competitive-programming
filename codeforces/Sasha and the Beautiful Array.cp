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

        int mn=INT_MAX;
        int mx=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        cout<<mx-mn<<endl;
    }
    
    return 0;
}