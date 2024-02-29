#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        string s;
        cin>>s;

        long long count=0;
        if(n>2){
            for(long long i=0; i<n-2; i++){
                if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'){
                    count++;
                    i+=2;
                }else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
                    count++;
                    i+=2;
                } 
            }
        }    
        cout<<count<<endl;
    }    

    return 0;  
}