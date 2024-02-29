#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    optimized
    int n;
    cin>>n;

    bool flag=true;
    for(int i=1; i<=n; i++){
        string s;
        cin>> s;

        if(s=="mumble"){
            continue;
        }else{
            int x=stoi(s);
            if(x!=i){
                flag=false;
            }
        }
    }

    if(flag){
        cout<<"makes sense\n";
    }else{
        cout<<"something is fishy\n";
    }

    return 0;
}
