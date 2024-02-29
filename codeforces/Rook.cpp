#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        for(int i=1; i<=8; i++){
            string ans="";
            ans+=s[0];
            ans+=to_string(i);
            if(ans==s){
                continue;
            }
            cout<<ans<<endl;
        }

        char ch='a';
        for(int i=1; i<=8; i++){
            string ans="";
            ans+=ch;
            ans+=s[1];
            ch++;
            if(ans==s){

                continue;
            }
            cout<<ans<<endl;
        }
    }
        
  return 0;
}