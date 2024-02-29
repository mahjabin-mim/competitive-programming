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

        vector <string> v;
        string str="";
        int start=0;
        for(int i=0; i<s.length()-1; i++){
            if((s[i]=='b' || s[i]=='c' || s[i]=='d') && (s[i+1]=='b' || s[i+1]=='c' || s[i+1]=='d')){
                for(int j=start; j<=i; j++){
                    str+=s[j];
                }
                v.push_back(str);
                v.push_back(".");
                str="";
                start=i+1;
            }
            else if(i!=0 && (s[i]=='b' || s[i]=='c' || s[i]=='d') && 
                (s[i-1]=='a' || s[i-1]=='e') && 
                (s[i+1]=='a' || s[i+1]=='e')){
                for(int j=start; j<i; j++){
                    str+=s[j];
                }
                v.push_back(str);
                v.push_back(".");
                str="";
                start=i;
            }
        }

        string last="";
        if(start<n){
            for(int i=start; i<n; i++){
                last+=s[i];
            }
            v.push_back(last);
            v.push_back(".");
        }
        
        for(int i=0; i<v.size()-1; i++){
            cout<<v[i];
        }
        cout<<endl;
    }
        
  return 0;
}