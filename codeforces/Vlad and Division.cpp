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

        int arr[n];
        map <int,int> mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int count=n;
        long long x=2147483647;
        for(int i=0; i<n; i++) {
            if(mp[arr[i]]>0){
                mp[arr[i]]--;
                int y=x^arr[i];
                if(mp[y]>0){
                    mp[y]--;
                    count--;
                }
            }
        }
        cout<<count<<endl;  
    }
    
    return 0;
}