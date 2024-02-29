#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    string s;
    long long k;
    cin>>s>>k;
    long long n=s.size();
    long long count=0;
    for(long long i=0;i<s.size();i++){
       if(s[i]=='0'){
         count++;
       }
    }
    
    if(count<k){
      cout<<n-1<<endl;
    }else{
      long long x=0,ans=0;
      for(long long i=s.size()-1;i>=0 ;i--){
          if(s[i]=='0'){
              x++;
          }else{
             ans++;
          }
          
          if(x==k){
            break;
          }
      }
      cout<<ans<<endl;
    }
    
    return 0;
}