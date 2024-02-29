//https://codeforces.com/contest/1915/problem/F
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
        vector< pair <int,int> > v;
        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;
            v.push_back( make_pair(a,b) );
        }
        sort(v.begin(), v.end());
        long long count=0;   
        ordered_set os;
        for(int i=0; i<n; i++){
            count += (os.size()-os.order_of_key(v[i].second));
            //order_of_key returens count of smaller value than k
            os.insert(v[i].second);
        }
        cout<<count<<endl;   
    }
    
    return 0;
}