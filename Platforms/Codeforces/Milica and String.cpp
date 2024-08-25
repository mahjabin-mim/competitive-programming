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
        
        string s;
        cin>>s;
        
        long long countb=0;
        for(long long i=0;i<s.size();i++){
             if(s[i]=='B')countb++;
        }
        if(countb==k)cout<<0<<endl;
        else if(countb<k){
            long long counta=0;
            for(long long i=0;i<s.size();i++){
                if(s[i]=='A')counta++;
                if(counta==abs(k-countb)){
                    cout<<1<<endl;
                    cout<<i+1<<" "<<"B"<<endl;
                    break;
                }
            }
 
        }
        else if(countb>k){
            long long count=0;
            for(long i=0;i<s.size();i++){
                 if(s[i]=='B')count++;
                 if(count==countb-k){
                    cout<<1<<endl;
                    cout<<i+1<<" "<<"A"<<endl;
                    break;
                 }
            }
        }
	  }
    
  return 0;
}