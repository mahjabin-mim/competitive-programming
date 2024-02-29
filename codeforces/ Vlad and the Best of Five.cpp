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
        string s;
        cin>>s;

        int a=0,b=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='A'){
                a++;
            }else{
                b++;
            }
        }

        if(a>b){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
    
    return 0;
}