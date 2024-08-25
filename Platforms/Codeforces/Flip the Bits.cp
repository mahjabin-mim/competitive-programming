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
      string s1,s2;
      cin>>s1>>s2;
      
      int count=0;
      bool flag=true;
      for(int i=0; i<n; i++){
        count+=((s1[i]=='1')-(s1[i]=='0'));
        if((s1[i]==s2[i]) != (s1[i+1]==s2[i+1]) && count!=0){
            flag = false;
        }
      }
      
      if(flag){
        cout<<"YES\n"; 
      }else{
        cout<<"NO\n"; 
      }
    }
    
    return 0;
}