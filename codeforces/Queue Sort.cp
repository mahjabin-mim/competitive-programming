#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

void ans(int x){
    if(x<=9){
        cout<<"0"<<x;
    }else{
        cout<<x;
    }
}

int main()
{
    optimized
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int arr[n];
        int mn = INT_MAX;
        for(int i=0; i<n; i++) {
          cin>>arr[i];
          mn = min(mn, arr[i]);
        }
 
        int c=0;
        int index=0;
        for(int i=0; i<n; i++){
          if(arr[i]==mn){
            index = i;
            break;
          }
          else{
            c++;
          }
        }
 
        bool flag=true;
        for(int i=index+1; i<n; i++){
          if(arr[i] < arr[i-1]){
            flag=false;
          }
        }
        
        if(flag){
          cout<<c<<endl;
        }else{
          cout<<-1<<endl;
        }
    }
        
  return 0;
}