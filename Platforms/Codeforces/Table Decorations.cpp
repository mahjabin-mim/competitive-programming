#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    a=min(a,b+c+b+c);
    b=min(b,a+c+a+c);
    c=min(c,a+b+a+b);
    cout << (a+b+c)/3;
    return 0;
}