#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    optimized
    int t;
    cin>>t;

    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;

        int ans=0;
        if(k==1){
            ans=1;
        }else if(k==2){
            if(n>m){
                ans=m;
            }else{
                ans=(n-1)+m/n;
            }
        }else if(k==3){
            if(m>n){
                ans=m-n+1;
                ans-=m/n;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
