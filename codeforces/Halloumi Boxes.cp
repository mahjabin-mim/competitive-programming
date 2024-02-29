#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
            long long n,k;
            cin>>n>>k;
            vector<long long>v(n);
            for(int i=0;i<n;i++){
              cin>>v[i];
            }
                
            if(k>=2)
                cout<<"YES"<<endl;
            else{
                vector<long long>p=v;
                sort(p.begin(),p.end());
                if(v==p){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
    }
        
  return 0;
}