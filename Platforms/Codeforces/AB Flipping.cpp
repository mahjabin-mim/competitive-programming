#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;

      string s;
      cin>>s;

      int ans=n-1;
      for(int i=0; i<n; i++){
        if(s[i]=='B'){
            ans--;
        }else{
            break;
        }
      }

      for(int i=n-1; i>=0; i--){
        if(s[i]=='A'){
            ans--;
        }else{
            break;
        }
      }

      if(ans<1){
        cout<<0<<endl;
      }else{
        cout<<ans<<endl;  
      }         
    }
    
    return 0;
}
                                                            