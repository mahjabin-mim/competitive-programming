#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
 
int main()
{ 
    optimized
    int n,q;
    cin>>n>>q;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<q; i++){
        int x;
        cin>>x;
        for(int j=0; j<n; j++){
            if(x==arr[j]){
                cout<<j+1<<" ";
                int temp=arr[j];
                for(int k=j-1; k>=0; k--){
                    arr[k+1]=arr[k];
                }
                arr[0]=temp;
                break;
            }
        }
    }
    
    return 0;
}