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
        
        if(n==3){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                cout<<1<<" "<<-1<<" ";
            }
            cout<<endl;
        }
        else{
            int temp=n/2;
            for(int i=0;i<n/2;i++){
                cout<<temp-1<<" "<<-temp<<" ";
            }
            cout<<temp-1<<endl;
        }
    }
    
    return 0;
}