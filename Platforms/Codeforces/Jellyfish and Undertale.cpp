#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n; 

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }   
        sort(arr,arr+n);

        long long sec=0;
        for(int i=0; i<n; i++){
            if(b+arr[i]<=a){
                b+=arr[i];
            }else{
                sec+=(b-1);
                b=min(1+arr[i],a);
            }
        }

        cout<<sec+b<<endl;
    }

    return 0;
}
                                                            