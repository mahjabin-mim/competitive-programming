#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    double h,l;
    cin>>h>>l;

    double a=l*l;
    double b=h*h;
    double ans=((a-b)/(double)(2*(h)));
    cout<<fixed<<setprecision(13)<<ans<<endl;
    
    return 0;
}