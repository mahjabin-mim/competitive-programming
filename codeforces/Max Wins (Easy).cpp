#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n==1){
            cout<<0<<endl;
        }else{
            cout<<log2(n)<<endl;
        }
    }
    
    return 0;
}