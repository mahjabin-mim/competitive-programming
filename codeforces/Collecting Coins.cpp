#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int mx=max(a,max(b,c));
        if(mx-a>0 && n>=(mx-a)){
            n-=(mx-a);
            a+=(mx-a);
        }
        if(mx-b>0 && n>=(mx-b)){
            n-=(mx-b);
            b+=(mx-b);
        }
        if(mx-c>0 && n>=(mx-c)){   
            n-=(mx-c);
            c+=(mx-c);
        }
        
        if(a==b && b==c && n%3==0){a+=(mx-a);
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}