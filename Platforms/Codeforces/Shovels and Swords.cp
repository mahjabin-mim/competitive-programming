#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long t;
    cin>>t;
     
    while(t--){
        long long x,y;
        cin>>x>>y;
        
        if(x==0 || y==0){
            cout<<0<<endl;
        }else{
          long long z=(x+y)/3;
          cout<<min({x,y,z})<<endl;
        }
    }
  
    return 0;
}
                                                            