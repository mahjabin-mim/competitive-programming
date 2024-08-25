#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int n,p,q,count=0 ;
    cin>>n;
    for(int i =0;i<n;i++){
      cin>>p>>q;
      if(q-p>=2){
        count++;
      }
    }
    cout<<count;
    
  return 0;
}