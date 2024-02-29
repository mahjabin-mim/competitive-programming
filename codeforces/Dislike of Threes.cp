#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[2000];
        vector<int> v;
        for(int i=1;i<=2000;i++){
            arr1[i]=i;
        }
 
        for(int i=1;i<=2000;i++){
            if(arr1[i]%3!=0 && arr1[i]%10!=3){
               v.push_back(i);
            }
        }
        cout<<v[n-1]<<endl;
    }
        
  return 0;
}