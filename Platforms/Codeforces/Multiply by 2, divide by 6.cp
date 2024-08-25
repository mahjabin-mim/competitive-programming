#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long c1=0,c2=0;
        while(!(n%2)){
            n/=2;
            c1++;
        }
        
        while(!(n%3)){
            n/=3;
            c2++;
        }
        
        if(n!=1 || c1>c2){
            cout<<-1<<endl;
        }else{
            cout<<(c2-c1)+c2<<endl;
        }
    }
    return 0;
}