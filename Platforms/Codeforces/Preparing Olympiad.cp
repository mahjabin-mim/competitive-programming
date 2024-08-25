#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ans=0;
    for(int mask=1;mask<(1<<n);mask++){
        int sum=0,mn=INT_MAX,mx=INT_MIN,cnt=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                sum+=a[i];
                mn=min(mn,a[i]);
                mx=max(mx,a[i]);
                cnt++;
            }
        }
        if(sum>=l && sum<=r && mx-mn>=x && cnt>=2){
            ans++;
        }
    }
    cout<<ans<<'\n';
    
  return 0;
}