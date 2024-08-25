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
        int a,b,l;
        cin>>a>>b>>l;

        int x=(log(l)/log(a))+10;
        int y=(log(l)/log(b))+10;
        //long long ans=0;
        set <int> s;
        for(int i=0; i<=x; i++){
            for(int j=0; j<=y; j++){
                long long k=pow(a,i)*pow(b,j);
                if(l%k==0 && l>=k){
                    //ans++;
                    s.insert(l/k);
                }
            }
        }
        cout<<s.size()<<endl;
    }
    
    return 0;
}