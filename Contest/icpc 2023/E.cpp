#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;

    for(int k=1; k<=t; k++){
        int n;
        cin>>n;

        int arr[n];
        long long same=0;
        long long indentical=0;
        set <int> s;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            s.insert(arr[i]);
            if(i!=0){
                if(arr[i]==arr[i-1]){
                    same++;   
                }else if(same!=0){
                    same++;
                    indentical+=(same*(same+1)/2)-same;
                    same=0;
                }
            }
        }

        if(same!=0){
            same++; 
            indentical+=(same*(same+1)/2)-same;
        }
        
        if(s.size()>1){
            long long ans=(n*(n+1)/2)-n;
            cout<<"Case "<<k<<":"<<" "<<ans-indentical<<endl;
        }else{
            cout<<"Case "<<k<<":"<<" "<<0<<endl;
        }
        
    }

    return 0;
}
                                                            