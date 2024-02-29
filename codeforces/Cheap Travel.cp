#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long n,a,b,x;
    cin>>n>>a>>b>>x;
    
    long long ans=0;
    double y=(x/a);
    if(y<b){
      if(n%a==0){
          ans=(n/a)*x;
        }else{
          ans=(n/a)*x+min((n%a)*b,x);
        }
    }else if(y>b){
      ans=(n*b);
    }else{
      ans=(n*b);
    }
    cout<<ans<<endl;

    return 0;
}
                                                            