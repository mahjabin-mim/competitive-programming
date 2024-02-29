#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,a,b;
    cin>>n>>a>>b;
    
    if(n-a>b+1){
        cout<<b+1<<endl;
    }else{
        cout<<n-a<<endl;
    }
    
    return 0;
}
                                                            