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
      string a,b,c;
      cin>>a>>b>>c;
      string ans="NO";
      for(int i =0 ;i<a.size();i++){
        if(c[i]!=a[i] && c[i]!=b[i]){
          ans="YES";
          break;
        }
      }
      cout<<ans<<endl;
	  }
    
  return 0;
}