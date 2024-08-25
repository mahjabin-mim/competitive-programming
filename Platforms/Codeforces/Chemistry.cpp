#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        map <char,int> map;
        for(int i=0; i<n; i++){
            char c;
            cin>>c;
            map[c]++;
        }

        long long count=0;
        for(auto i:map){
            if(i.second%2!=0){
                count+=1; 
            }
        }

        if(count>0){
            if(count<=k){
                cout<<"YES"<<endl;
            }else if((count-1)==k){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(k!=n){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }

    return 0;
}
                                                            