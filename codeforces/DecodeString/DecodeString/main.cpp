//
//  main.cpp
//  DecodeString
//
//  Created by Mahjabin Mim on 9/14/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int t,n,i,j,c;
    string s;
    char ch;
    char str[50]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    cin>>t;
    
    for(i=0;i<t;i++){
        cin>>n;
        cin>>s;
        
        string val;
        
        if(s.length()>n){
            break;
        }else{
            for(j=s.length()-1;j>=0;j--){
                if(s[j]!='0'){
                    ch = s[j];
                    c = ch-'0'-1;
                    val+=str[c];
                }else{
                    string temp;
                    temp+=s[j-2];
                    temp+=s[j-1];

                    c = stoi(temp)-1;
                    val+=str[c];
                    j-=2;
                }
            }reverse(val.begin(),val.end());
             cout<<val<<endl;
        }
    }
    return 0;
}
