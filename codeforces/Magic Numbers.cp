#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    string s;
    cin>>s;

    bool flag=true;
    for(int i=0; i<s.length(); i++){
      if(s[i]!='1' && s[i]!='4'){
        flag=false;
        break;
      }else if(s[0]=='4'){
        flag=false;
        break;
      }else if(s.find("444")!=s.npos){
        flag=false;
        break;
      }
    }
    
    if(flag){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }

    return 0;
}
                                                            