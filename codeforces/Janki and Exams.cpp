#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        int marks=(x+y+z)/3;
        if(marks<30){
            cout<<"FAIL\n";
        }else{
            cout<<"PASS\n";
        }
    }
    
    return 0;
}