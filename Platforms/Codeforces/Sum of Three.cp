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

        if(n<6 || n==9){
            cout<<"NO"<<endl;
        }else if((n-3)!= 1 && (n-3)!= 2 && (n-3)%3 != 0){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<" "<<n-3<<endl;
        }else if((n-5)!= 1 && (n-5)!= 4 && (n-5)%3 != 0){
            cout<<"YES"<<endl;
            cout<<1<<" "<<4<<" "<<n-5<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
                                                            