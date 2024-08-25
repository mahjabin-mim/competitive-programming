#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    set <int> s;
    
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        s.insert(x);
    }
    
    cout<<s.size()<<"\n";

    return 0;
}
