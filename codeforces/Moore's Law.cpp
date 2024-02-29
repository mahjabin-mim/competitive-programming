#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long double n,t;
    cin>>n>>t;
    long double x=1.000000011;
    long double ans=(n*pow(x,t));
    cout<<fixed<<setprecision(15)<<ans<<endl;    
    
    return 0;
}