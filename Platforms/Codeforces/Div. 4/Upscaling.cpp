/*
Author: Mahjabin7
Date: 28/3/24
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() 
{
    optimized
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char c='#';
        int count=0;
        string s="";
        for(int i=0; i<1; i++){
            for(int j=0; j<2*n; j++){
                if(count==2){
                    if(c=='.'){
                        c='#';
                    }else{
                        c='.';
                    }
                    count=0;
                }
                s+=c;
                count++;
            }
        }

        if(n%2==0){
            for(int i=0; i<n; i++){
                cout<<s<<endl;
                cout<<s<<endl;
                s = string(s.rbegin(), s.rend());
            }
        }else{
            string s2="";
            count=0;
            if(s[s.length()-1]=='.'){
                char ch='#';
                for(int i=0; i<2*n; i++){
                    if(count==2){
                        if(ch=='.'){
                            ch='#';
                        }else{
                            ch='.';
                        }
                        count=0;
                    }
                    s2+=ch;
                    count++;
                }
            }else if(s[s.length()-1]=='#'){
                char ch='.';
                for(int i=0; i<2*n; i++){
                    if(count==2){
                        if(ch=='.'){
                            ch='#';
                        }else{
                            ch='.';
                        }
                        count=0;
                    }
                    s2+=ch;
                    count++;
                }
            }
            for(int i=1; i<=n; i++){
                if(i%2!=0){
                    cout<<s<<endl;
                    cout<<s<<endl;
                }else{
                    cout<<s2<<endl;
                    cout<<s2<<endl;
                }
            }
        }
    }
    
    return 0;
}