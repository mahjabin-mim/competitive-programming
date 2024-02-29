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

        int arr[n];
        long long p=1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            p*=arr[i];
        }

        long long rem= 2023%p;
        if(rem==0){
            cout<<"YES"<<endl;
            long long ans=2023/p;
            cout<<ans<<" ";
            for(int i=0; i<k-1; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
        
  return 0;
}