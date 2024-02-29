#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    char c;
    string s;
    cin>>c>>s;

    char arr[35]={'q','w','e','r','t','y','u','i','o','p','[',']','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

    string str="";
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<32; j++){
            if(s[i]==arr[j]){
                if(c=='L'){
                    str+=arr[j+1];
                }else{
                    str+=arr[j-1];
                }
            }
        }
    }
    cout<<str<<endl;

    return 0;
}
                                                            