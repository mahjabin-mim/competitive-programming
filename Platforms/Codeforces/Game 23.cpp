#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long n,m;
    cin>>n>>m;
    
    if(n==m){
        cout<<0<<endl;
    }else{
        long long rem=m%n;
        if(rem!=0 || m%3!=0 && m%2!=0){
            cout<<-1<<endl;
        }else{
            long long count=0;
            long long ans=m/n;
            long long x=ans;
            long long y=1;
            while(ans>1){
                count++;
                if(ans%2==0){
                    ans/=2;
                    y*=2;
                }else{
                    ans/=3;
                    y*=3;
                }
            }

            if(x==y){
                cout<<count<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}