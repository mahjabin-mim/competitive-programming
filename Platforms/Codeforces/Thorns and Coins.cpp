#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    optimized
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int coin=0;
        for(int i=1; i<n; i++){
            if(s[i]=='*' && s[i-1]=='*'){
                break;
            }else{
                if(s[i]=='@'){
                    coin++;
                }
            }
        } 
        cout<<coin<<endl;
    }
    
    return 0;
}