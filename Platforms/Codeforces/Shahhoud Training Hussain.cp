#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long
int main()
{

    ll t ;
    cin>>t;
    while(t--)
    {
        ll n,p,k;
        cin>>k>>p>>n;
        if(p>=k)
        {
            cout<<0<<endl;
        }
        else
        {
            ll sum = (n*k)-(n*p);
            cout<<sum<<endl;
        }

    }

}
