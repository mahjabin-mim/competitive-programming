#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

long long getpow(long long val,long long p)
{
    long ans=1;
    while(p>0)
    {
        if(p%2!=0)
        {
            ans*=val;
        }
        p/=2;
        val*=val;
    }
    return ans;
}

int main()
{ 
        optimized
        long long b,k;
        cin>>b>>k;
        
        long long v[k];
        long long x=k;
        for(long long i=0; i<k; i++){
          cin>>v[i];
        }
        
        x=x-1;
        long long sum=0;
        for(long long i=0; i<k; i++){
          long long xx=v[i]*getpow(b,x);
          sum+=xx;
          x--;
        }
        
        if(sum%2==0){
          cout<<"even"<<endl;
        }
        else{
          cout<<"odd"<<endl;
        } 
        
        return 0;
}