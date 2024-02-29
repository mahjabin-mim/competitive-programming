#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long ans=n;
        for(long long i=1; i<s.length(); i++){
            if(s[i]!=s[i-1]){
                ans+=i;
            }
        }
        cout<<ans<<endl;
    }
        
  return 0;
}