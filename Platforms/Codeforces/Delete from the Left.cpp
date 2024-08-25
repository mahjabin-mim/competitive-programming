#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() {
    optimized
    string s1, s2;
    cin>>s1>>s2;

    int count=0;
    if(s1.length()<s2.length()){
        int ind=s2.length()-1;
        bool flag = true;
        for(int i=s1.length()-1; i>=0; i--){
            for(int j=ind; j>=0; j--){
                if(s1[i]==s2[j]){
                    count+=2;
                    break;
                }else{
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
            ind--;
        }
    }else{
        int ind=s1.length()-1;
        bool flag = true;
        for(int i=s2.length()-1; i>=0; i--){
            for(int j=ind; j>=0; j--){
                if(s2[i]==s1[j]){
                    count+=2;
                    break;
                }else{
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
            ind--;
        }
    }
    int ans = (s1.length()+s2.length())-count;
    cout<<ans<<endl;

    return 0;
}