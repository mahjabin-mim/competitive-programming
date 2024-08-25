/*
Author: Mahjabin7
Date: 8/4/24
*/
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
        long long n,k;
        cin>>n>>k;

        long long arr[n];
        long long sum=0;
        for(long long i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum>k){
            long long x;
            if(k%2==0){
                x=k/2;
            }else{
                x=(k/2)+1;
            }

            for(long long i=0; i<n; i++){
                if(arr[i]==0){
                    continue;
                }else if(arr[i]<=x){
                    x-=arr[i];
                    arr[i]=0;
                }else{
                    arr[i]-=x;
                    x=0;
                }
                if(x==0){
                    break;
                }
            }

            x=k/2;
            for(long long i=n-1; i>=0; i--){
                if(arr[i]==0){
                    continue;
                }else if(arr[i]<=x){
                    x-=arr[i];
                    arr[i]=0;
                }else{
                    arr[i]-=x;
                    x=0;
                }
                if(x==0){
                    break;
                }
            }

            int ans=0;
            for(auto i:arr){
                if(i==0){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }else{
            cout<<n<<endl;
        }    
    }
    
    return 0;
}