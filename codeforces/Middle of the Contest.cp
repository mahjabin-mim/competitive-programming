#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

void fn(int x){
    if(x<=9){
        cout<<"0"<<x;
    }else{
        cout<<x;
    }
}

int main()
{
    optimized
    string y,x;
    cin>>x>>y;
    
    long long h1,h2,m1,m2;
    h1 = (x[0]-'0')*10+(x[1]-'0');
    m1 = (x[3]-'0')*10+(x[4]-'0');
    h2 = (y[0]-'0')*10+(y[1]-'0');
    m2 = (y[3]-'0')*10+(y[4]-'0');
    long long hh = (h1+h2)*60;
    long long mm = (m1+m2) ;
    long long tt = (hh+mm)/2;
    
    fn((tt/60));
    cout<<":";
    fn((tt%60));
    cout<<endl;
        
  return 0;
}