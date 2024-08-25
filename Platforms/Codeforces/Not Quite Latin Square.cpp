#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int a=0, b=0, c=0;
        for(int i=0; i<3; i++){
            string s;
            cin>>s;
            
            for(int j=0; j<3; j++){
                if(s[j]=='A'){
                    a++;
                }else if(s[j]=='B'){
                    b++;
                }else if(s[j]=='C'){
                    c++;
                }
            }
        }
    
        if(a<3){
            cout<<'A'<<endl;
        }else if(b<3){
            cout<<'B'<<endl;
        }else{
            cout<<'C'<<endl;
        }
    }
        
  return 0;
}