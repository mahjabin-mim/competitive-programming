#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

void ans(int x){
    if(x<=9){
        cout<<"0"<<x;
    }else{
        cout<<x;
    }
}

int main()
{
    optimized
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        
        sort(s.begin(), s.end());
        long long count=1;
        long long sum=0;
        for(int i=1; i<s.length(); i++){
            if(s[i]==s[i-1]){
                count++;
            }else{
                sum=max(sum,count);
                count=1;
            }
        }
        
        sum=max(sum,count);
        if(sum>n/2){
            cout<<sum-(n-sum)<<endl;
        }else{
            cout<<n%2<<endl;
        }
    }
        
  return 0;
}