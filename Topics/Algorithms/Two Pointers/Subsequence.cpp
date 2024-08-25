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
        string a,b;
        cin>>a>>b;

        int count=0;
        int ind=0;
        for(int i=0; i<b.length(); i++){
            while(ind<a.length() && a[ind]!=b[i]){
                ind++;
            }
            if(ind<a.length()){
                count++;
            }else{
                break;
            }
        }
        cout<<count<<endl;
        //O(max(a,b))
    }
    
    return 0;
}