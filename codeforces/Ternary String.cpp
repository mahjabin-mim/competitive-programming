#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        vector < pair <char,int> > v;
        int idx=-1;
        for(int i=0; i<s.length(); i++){
            if(idx==-1 || s[i]!=v[idx].first){
                v.push_back({s[i],1});
                idx++;
            }else{
                v[idx].second++;
            }
        }

        int ans=INT_MAX;
        for(int i=1; i<idx; i++){
            if(v[i-1].first != v[i+1].first){
                ans=min(ans,v[i].second+2);
            }
        }

        if(ans==INT_MAX){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    
    return 0;
}