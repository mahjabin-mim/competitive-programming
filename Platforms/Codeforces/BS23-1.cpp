#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    optimized
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int arr[7]={1000,500,100,50,10,5,1};
        map <int,int> mp;
        for(int i=0; i<7; i++){
            if(n>=arr[i]){
                int x=n/arr[i];
                mp[arr[i]]=x;
                n-=(arr[i]*x);
            }
            if(n==0){
                break;
            }
        }

        for(int i=0; i<7; i++){
            for(auto j:mp){
                if(arr[i]==j.first){
                    cout<<arr[i]<<" "<<j.second<<endl;
                    break;
                }
            }
        }

    }

    return 0;
}
