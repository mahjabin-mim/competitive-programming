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

        long long arr[n+1], pSum[n+1];
        long long sum=0;
        bool flag=false;
        pSum[0]=0;
        arr[0]=0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if(i%2!=0){
                sum-=arr[i];
            }else{
                sum+=arr[i];
            }
            pSum[i]=sum;
            if(sum==0){
                flag=true;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            sort(pSum,pSum+n+1);
            for(int i=1; i<=n; i++){
                if(pSum[i]==pSum[i-1]){
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
        
  return 0;
}