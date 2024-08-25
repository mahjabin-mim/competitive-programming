#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
	  cin>>t;
	  while(t--){
	      int n,k;
        cin>>n>>k;
        
        string s;
        char c='a';
        for(int i=0;i<k;i++){
            s+=c;
            c++;
        }
        
        string ans;
        for(int i=0;i<n;i++){
            ans+=s;
        }
        cout<<ans<<endl;
	  }
    
  return 0;
}