//https://cses.fi/problemset/task/1646/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main()
{ 
    optimized
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0; i<n;i++){
        long long x;
        cin>>x;
        if(i==0){
            arr[i]=x;
        }else{
            arr[i]=arr[i-1]+x;
        }
    }
    for(int i=0; i<q;i++){
        long long a,b;
        cin>>a>>b;
        if(a==1){
            cout<<arr[b-1]<<endl;
        }else{
            cout<<arr[b-1]-arr[a-2]<<endl;
        }
    }

    return 0;
}
                                                            