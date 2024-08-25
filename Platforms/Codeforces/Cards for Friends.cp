#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      long long w,h,n,count=1;
      cin>>w>>h>>n;
      
      long long area=w*h;
      while(area%2==0){
        area/=2;
        count*=2;
      }
      
      if(count>=n){
         cout<<"Yes"<<endl;
      }else{
        cout<<"No"<<endl;
      } 
    }
    
    return 0;
}