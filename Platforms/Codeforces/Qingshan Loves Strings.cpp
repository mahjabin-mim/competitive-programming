#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
 
int main()
{ 
    optimized
    int tt;
    cin>>tt;

    while(tt--){
        int n,m;
        cin>>n>>m;

        string s,t;
        cin>>s;
        cin>>t;

        if(n==1){
            cout<<"YES\n";
        }else{
            bool flag=true;
            string check="";
            for(int i=0; i<n-1; i++){
                if(s[i]==s[i+1]){
                    flag=false;
                    check+=s[i];
                }
            }

            if(flag){
                cout<<"YES\n";
            }else{
                flag=true;
                for(int i=0; i<m-1; i++){
                    if(t[i]==t[i+1]){
                        flag=false;
                        break;
                    }
                }

                if(flag){
                    for(int i=0; i<check.length(); i++){
                        if(t[0]==check[i]){
                            flag=false;
                            break;
                        }
                    }

                    if(flag && t[0]==t[m-1]){
                        cout<<"YES\n";
                    }else{
                        cout<<"NO\n";
                    }
                }else{
                    cout<<"NO\n";
                }
            }
        }   
    }
    
    return 0;
}