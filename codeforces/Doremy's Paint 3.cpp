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

        map <int,int> map;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            map[x]++;
        }

        if(map.size()==1){
            cout<<"YES\n";
        }else if(map.size()==2){
            bool flag=false;
            for(auto i:map){
                if(i.second==(n/2)){
                    flag=true;
                }
            }

            if(flag){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
        
    }
    
    return 0;
}