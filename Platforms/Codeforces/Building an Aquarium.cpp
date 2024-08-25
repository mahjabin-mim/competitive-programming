#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int arr[n];
        int mx=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }

        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=mx-arr[i];
        }
        if(sum==x){
            cout<<mx<<endl;
        }else if(sum<x){
            int ans=(x-sum)/n;
            ans+=mx;
            cout<<ans<<endl;;
        }else{
            sort(arr,arr+n);
            int ans;
            int l=0;
            int r=mx+10;
            while(l<=r){
                int mid=(l+r)/2;
                long long sum2=0;
                for(int i=0; i<n; i++){
                    if(mid>=arr[i]){
                        sum2+=(mid-arr[i]);
                    }else{
                        break;
                    } 
                }
                
                if(sum2<=x){
                    l=mid+1; 
                    ans=mid;
                }else{
                    r=mid-1;
                }
            }
            
            cout<<ans<<endl;
        }
    }

    return 0;
}
                                                            