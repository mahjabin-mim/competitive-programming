#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b){
            cout<<c<<endl;
        }else if(a==c){
            cout<<b<<endl;
        }else{
            cout<<a<<endl;
        }
    }
        
  return 0;
}