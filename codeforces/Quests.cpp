#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr1[n];
        int arr2[n];

        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }

        int x=0,y=0,ans=0;
        for(int i=0; i<n; i++){
            if(k==i){
                break;
            }else{
                x+=arr1[i];
                y=max(y,arr2[i]);
                int z=x+(k-i-1)*y;
                ans=max(z,ans);
            }
        }
        cout<<ans<<endl;
    }
        
  return 0;
}