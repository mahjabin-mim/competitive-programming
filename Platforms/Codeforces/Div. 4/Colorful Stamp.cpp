/*
Author: Mahjabin7
Date: 12/3/24
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

        string s;
        cin>>s;

        bool w=false,r=false,b=false,flag=false;
        for(int i=0; i<n; i++){
            if(s[i]=='W'){
                w=true;
                if(i!=n-1){
                    set <int> st;
                    for(int j=i+1; j<n; j++){
                        if(s[j]=='W'){
                            break;
                        }else{
                            st.insert(s[j]);
                        }
                    }
                    if(st.size()==0){
                        flag=false;
                    }else if(st.size()!=2){
                        flag=true;
                        break;
                    }
                }
                if(i!=0){
                    set <int> st;
                    for(int j=i-1; j>=0; j--){
                        if(s[j]=='W'){
                            break;
                        }else{
                            st.insert(s[j]);
                        }
                    }
                    if(st.size()==0){
                        flag=false;
                    }else if(st.size()!=2){
                        flag=true;
                        break;
                    }
                }
            }else if(s[i]=='R'){
                r=true;
            }else{
                b=true;
            }
        }

        string ans="";
        if(flag){
            ans="NO";
        }else if(r && b && w==false){
            ans="YES";
        }else if((r && b==false) || (b && r==false)){
            ans="NO";
        }else if(w && r==false && b==false){
            ans="YES";
        }else{
            ans="YES";
        }
        cout<<ans<<endl;
    }
    
    return 0;
}