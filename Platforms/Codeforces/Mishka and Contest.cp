#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
        long long n,k;
        cin>>n>>k;
        long long v[n];
        long long count=0, cnt1=0;
        for(long long i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(long long i=0; i<n; i++)
        {
            if(v[i]<=k)count++;
            else
            {
                break;
            }
        }
        for(long long i=n-1; i>=0; i--)
        {
            if(v[i]<=k)cnt1++;
            else {
                break;
            }
        }
        if(count==n){
            cout<<count<<endl;
        }
        else{
        cout<<count+cnt1<<endl;
        }
        
  return 0;
}