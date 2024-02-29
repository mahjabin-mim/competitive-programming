#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    optimized
    int n;
    cin>>n;

    string s;
    cin>>s;

    bool v=false;
    bool c=false;
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y'){
            v=true;
        }else{
            c=true;
        }

        if(v && c){
            count++;
            v=false;
            c=false;
        }
    }
    cout<<count<<endl;

    return 0;
}
