#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long t;
    cin>>t;
    while(t--){
        long long m, n;
        cin>>n>>m;
 
        if(n == 1 && m == 1){
          cout<<0<<endl;
        }else if(n == 1){
          cout<<m-1 + n<<endl;
        }else if(m == 1){
          cout<<n-1 + m<<endl;
        }else{
            n--; 
            m--;
            cout<<(n+m) + min(n,m)+1<<endl;
        }
    }
    
    
    
    return 0;
}