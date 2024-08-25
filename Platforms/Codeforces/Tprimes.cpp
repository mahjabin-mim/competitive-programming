#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main()
{ 
    optimized
    long long arr[1000000]={0};
    for(int i=2; i<=1000000; i++){
        if(arr[i]==0){
            for(int j=2; i*j<=1000000; j++){
                arr[i*j]=1;
            }
        }
    }

    int n;
    cin>>n;    
    while(n--){
        long long x;
        cin>>x;

        long long sq;
        sq=sqrt(x);

        if(x==1){
            cout<<"NO\n";
        }else if(sq*sq==x && arr[sq]==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
                                                            