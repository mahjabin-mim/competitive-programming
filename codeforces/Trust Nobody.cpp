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

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int ans=-1;
        for(int i=0; i<=n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(arr[j]>i){
                    count++;
                }
            }

            if(count==i){
                ans=count;
            }
        }
        cout<<ans<<endl;
    }
        
  return 0;
}