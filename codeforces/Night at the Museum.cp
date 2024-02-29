#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    string a;
    cin>>a;
    
    int count=0;
    char initial='a';
    for(int i=0;i<a.size();i++){
        int r=min(abs(initial-a[i]),26-abs(initial-a[i]));
        initial=a[i];
        count+=r;
    }
    cout<<count<<endl;
    
    return 0;
}