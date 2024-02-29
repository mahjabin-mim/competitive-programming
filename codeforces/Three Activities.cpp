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

        vector<pair<int,int>> a(n);
        vector<pair<int,int>> b(n);
        vector<pair<int,int>> c(n);

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a[i].first=x;
            a[i].second=i+1;
        }

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b[i].first=x;
            b[i].second=i+1;
        }

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            c[i].first=x;
            c[i].second=i+1;
        }

        sort(a.begin(), a.end(), greater<pair<int, int> >()); 
        sort(b.begin(), b.end(), greater<pair<int, int> >()); 
        sort(c.begin(), c.end(), greater<pair<int, int> >()); 

        int ans=0;
        for(int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                for (int k=0; k<3; k++){
                    if(b[j].second!=c[k].second && a[i].second!=c[k].second && a[i].second!=b[j].second) 
                    ans=max(ans,c[k].first+b[j].first+a[i].first);
                }      
            }   
        }
        cout<<ans<<endl;
    }
        
  return 0;
}