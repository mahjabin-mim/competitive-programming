#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    optimized
    int t;
    cin>>t;

    while (t--) {
        int n,k;
        cin>>n>>k;

        int arr[n];
        bool pos=true;
        bool neg=true;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<0){
                pos=false;
            }else{
                neg=false;
            }
        }

        int count=0;
        int ans=0;
        if(pos){
            for(int i=0; i<n; i++){
                if(arr[i]>=0){
                    ans+=arr[i];
                    count++;
                }
                if(count==k){
                    break;
                }
            }
        }else if(neg){
            for(int i=0; i<n; i++){
                if(arr[i]<0){
                    ans+=abs(arr[i]);
                    count++;
                }
                if(count==k){
                    break;
                }
            }
        }else{
            int result=INT_MAX;
            int ind;
            for(int i=0; i<n; i++){
                if(arr[i]>=0){
                    ans+=arr[i];
                    count++;
                }
                if(count==k){
                    ind=i;
                    result=min(result,ans);
                    ans=0;
                    count=0;
                    break;
                }
            }
            
            int maxIdn=ind/k-1;
            while(ind>=maxIdn){
                for(int i=ind-1; i>=0; i--){
                    ans+=abs(arr[i]);
                    count++;
                    if(count==k){
                        result=min(result,ans);
                        ans=0;
                        count=0;
                        break;
                    }
                }
                ind--;
            }
            ans=result;  
        }
        cout<<ans<<endl;
    }

    return 0;
}
