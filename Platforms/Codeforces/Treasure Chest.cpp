#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        if(x>y){
            cout<<x<<endl;
        }else{
            if(y-x<=k){
                cout<<y<<endl;
            }else{
                cout<<y+y-(x+k)<<endl;
            }
        }
    }
    
    return 0;
}