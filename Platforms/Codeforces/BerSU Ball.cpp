#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,m;

    cin>>n;
    int boy[n];
    for(int i=0; i<n; i++){
        cin>>boy[i];
    }

    cin>>m;
    int girl[m];
    for(int i=0; i<m; i++){
        cin>>girl[i];
    }

    sort(boy,boy+n);
    sort(girl,girl+m);

    int count=0;
    int idx=0;
    for(int i=0; i<n; i++){
        for(int j=idx; j<m; j++){
            if(boy[i]==girl[j] || boy[i]+1==girl[j] || boy[i]-1==girl[j]){
                count++;
                idx=j+1;
                break;
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}