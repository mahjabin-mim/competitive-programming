#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;

        int count=0;
        bool flag=false;
        int arr[k];
        for(int i=0; i<k; i++){
            cin>>arr[i];
            if(arr[i]==0){
                flag=true;
            }
            if(arr[i]<0){
                count++;
            }
        }

        if(flag || count%2==1){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }

    }
        
  return 0;
}