#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int a,b;
    cin>>a>>b;
    
    int f=0;
    int i =1;
    int k=0;
    b=240-b;
    while(b>k){
        k=k+(i*5);
        if(k>b){
            break;
 
        }else{
          i++;
          f++;
        }
    }
    
    if(f>a){
        cout<<a;
    }else{
        cout<<f;
    }
        
  return 0;
}