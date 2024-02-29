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

        long long sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum+=x;
        }
        
        if (floor(sqrt(sum)) == ceil(sqrt(sum))){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
        
  return 0;
}