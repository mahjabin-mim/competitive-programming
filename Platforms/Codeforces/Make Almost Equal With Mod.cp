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

        long long arr[n];
        bool even=false, odd=false;
        for(long long i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i]%2==0){
                even=true;
            }else{
                odd=true;
            }
        }

        if(even && odd){
            cout<<2<<endl;
        }else{ 
            long long ans=2;
            while(1){
                set <long long> rem;
                for(long long i=0; i<n; i++){
                  rem.insert(arr[i]%ans);
                }
                
                if(rem.size()==2){
                    cout<<ans<<endl;
                    break;
                }
                ans*=2;
            }
        }
    }
        
  return 0;
}