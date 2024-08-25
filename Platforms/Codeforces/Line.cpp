#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;

        vector <long long> v;
        long long total=0;
        long long min=0;

        for(long long i=0; i<n; i++){
            long long l=i;
            long long r=n-i-1;

            if(s[i]=='L'){
                if(r>l){
                    min++;
                    total+=r;
                    v.push_back(r-l);
                }else{
                    total+=l;
                }
            }else{
                if(l>r){
                    min++;
                    total+=l;
                    v.push_back(l-r);
                }else{
                    total+=r;
                }
            }
        }

        sort(v.begin(),v.end());
        vector <long long> ans(n+1);
        for(long long i=min-1; i<n; i++){
            ans[i]=total;
        }
        int vIdx=0;
        for(long long i=min-2; i>=0; i--){
            ans[i]=ans[i+1]-v[vIdx];
            vIdx++;
        }
        for(long long i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
                                                            