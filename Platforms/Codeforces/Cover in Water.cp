#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        string x ;
        cin>>x;
        
        int cnt =0 ;
        int h =0 ;
        int dot = 0;
        vector<long long>val ;
        for(int i =0;i<n;i++){
            if(x[i]=='.' && h==1){
                cnt++;
                dot++;
            }
            if(dot>=3){
                cnt=2;
                break;
            }
            if(h==1 && x[i]=='#'){
                dot=0;
                h =0;
            }
            if(x[i]=='.' && h==0){
                h =1 ;
                cnt++;
                dot++;
            }
            
        }
        cout<<cnt<<endl;
    }
        
  return 0;
}