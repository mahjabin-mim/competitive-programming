#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main()
{ 
    optimized
    char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string s="";
        for(int i=0; i<b; i++){
            s+=arr[i];
        }
       
        string ans="";
        int idx=0;
        for(int i=0; i<n; i++){
            if(idx==b){
                idx=0;
            }
            ans+=s[idx];
            idx++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
                                                            