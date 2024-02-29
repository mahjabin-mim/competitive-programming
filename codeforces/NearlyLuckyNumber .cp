#include <bits/stdc++.h>
#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    
    long long count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    
    bool flag=true;
    string str=to_string(count);
    for(int i=0; i<str.length(); i++){
        if(str[i]!='7' && str[i]!='4'){
            flag=false;
            break;
        }
    }
    
    if(flag){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
 	 	  		 	