#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() 
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        long long ans;
        if(sum%3==0){
            ans=0;
        }else{
            int x=sum%3;
            if(x==2){
                ans=1;
            }else{
                sort(arr,arr+n);
                if(x==1 && arr[0]==1){
                    ans=1;
                }else{
                    bool flag=false;
                    for(int i=0; i<n; i++){
                        sum-=arr[i];
                        if(sum%3==0){
                            flag=true;
                            break;
                        }
                        sum+=arr[i];
                    }

                    if(flag){
                        ans=1;
                    }else{
                        ans=2;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}