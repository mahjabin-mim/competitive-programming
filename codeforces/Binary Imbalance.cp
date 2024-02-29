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
      string s;
      string res="NO";
      cin>>n;
      cin>>s;
      for(long long i=0;i<n;i++){
        if(s[i]=='0'){
            res="YES";
            break;
        }
      }
      cout<<res<<endl;
    }
    
  return 0;
}