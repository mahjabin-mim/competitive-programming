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

        long long sec=0;
        if(s[0]!='0'){
            sec+=(s[0]-'0');
        }else{
            sec+=10;
        }
        
        for(int i=1; i<s.length(); i++){
            int a = (s[i-1]-'0');
            int b = (s[i]-'0');
            if(a==0){
                a=10;
            }
            if(b==0){
                b=10;
            }
            sec+=abs(a-b);
            sec+=1;
        }
        cout<<sec<<endl;
    }

    return 0;
}
                                                            