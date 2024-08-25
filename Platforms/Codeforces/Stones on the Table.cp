#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int count=0;
    for(int i=0; i<n; i++) {
        if(s[i]==s[i+1]) {
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}