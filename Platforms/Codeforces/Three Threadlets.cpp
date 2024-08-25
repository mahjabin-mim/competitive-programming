#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      
      if(a==b && b==c){
        cout<<"YES"<<endl;
      }else{
        int mn=min(a,b);
        mn=min(mn,c);
        
        bool flag=true;
        if(a%mn!=0 && b%mn!=0 && c%mn!=0){
          flag=false;
        }else{
          int count=0;
          while(a!=mn){
            a-=mn;
            count++;
            if(count>3){
              flag=false;
              break;
            }
          }
          while(b!=mn){
            b-=mn;
            count++;
            if(count>3){
              flag=false;
              break;
            }
          }
          while(c!=mn){
            c-=mn;
            count++;
            if(count>3){
              flag=false;
              break;
            }
          }
        }
        
        if(flag){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
      }
    }

    return 0;
}
                                                            