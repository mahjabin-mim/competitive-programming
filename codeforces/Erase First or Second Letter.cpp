#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        string unique="";
        unique+=s[0];
        vector <long long> v;
        v.push_back(1);
        for(int i=1; i<n; i++){
            bool flag=true;
            for(int j=0; j<unique.length(); j++){
                if(s[i]==unique[j]){
                    flag=false;
                }
            }
            if(flag){
                unique+=s[i];
                v.push_back(i+1);
            }
        }

        long long ans=0;
        for(auto i:v){
            ans+=(n-i+1);
        }
        cout<<ans<<endl;
    }
        
  return 0;
}