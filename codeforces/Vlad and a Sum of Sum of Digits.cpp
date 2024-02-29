#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    optimized
    int x=2000000;
    int sum[x];
    sum[0]=0;
    long long total=0;
    for(int i=1; i<=x; i++){
        string s=to_string(i);
        for(int j=0; j<s.length(); j++){
            int temp=s[j]-'0';
            total+=temp;
        }
        sum[i]=total;
    }
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long ans=sum[n];
        cout<<ans<<endl;
    }
    
    return 0;
}