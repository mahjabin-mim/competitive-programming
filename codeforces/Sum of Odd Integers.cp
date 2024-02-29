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
        
        if(n%2!=k%2 || k*k>n){
          cout<<"NO"<<endl;
        }else{
          cout<<"YES"<<endl;
        }
    }
    
    return 0;
}