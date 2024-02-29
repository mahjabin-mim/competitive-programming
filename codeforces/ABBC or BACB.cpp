#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int count=0;
        int sum=0;
        int mn=INT_MAX;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='A'){
                count++;
                sum++;
            }else{
                mn=min(mn,count);
                count=0;
            }
        }

        if(count>0){
            mn=min(mn,count);
        }

        if(s[0]=='B' || s[s.length()-1]=='B'){
            cout<<sum<<endl;
        }else{
            cout<<sum-mn<<endl;
        }
    }

    return 0;
}
                                                            