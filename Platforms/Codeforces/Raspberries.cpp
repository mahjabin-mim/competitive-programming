#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int ans=INT_MAX;
        int even=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x%2==0){
                even++;
            }
            if(x%k==0){
                ans=0;
            }
            ans=min(ans,k-x%k);
        } 

        if(k==4){
            if(even>=2){
                ans=0;
            }else if(even==1){
                ans=min(ans,1);
            }else{
                ans=min(ans,2);
            }
        }
        cout<<ans<<endl;    
    }
    
    return 0;
}