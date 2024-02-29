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

        string a="";
        a+=s[0];
        for(int i=1; i<s.length()-1; i++){
            if(s[i]=='0'){
                a+=s[i];
            }else{
                break;
            }
        }

        string b="";
        for(int i=a.length(); i<s.length(); i++){
            b+=s[i];
        }

        if(stoi(a)<stoi(b)){
            cout<<a<<" "<<b<<endl;
        }else{
            cout<<-1<<endl;
        }       
    }
        
  return 0;
}