#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        
        int op=0;
        bool flag=false;
        for(int i=0; i<500; i++){
            if(x.length()>100){
              break;
            }
            if(x.find(s) != string::npos){
              flag=true;
              break;
            }else{
              x+=x;
              op++;
            }
        }
        
        if(flag){
          cout<<op<<endl;
        }else{
          cout<<-1<<endl;
        }
    }

    return 0;
}
                                                            