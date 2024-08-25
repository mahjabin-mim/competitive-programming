#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int arr[n+2];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        long long count=0;
        for(int i=2;i<=n;i++)
        {
            int z=i+i-1;
            if(arr[i]>z){
                continue;
            }

            int x=(z%arr[i]+1);
            int y=i-x;
            while(y>=1){
                if(y+i==arr[i]*arr[y]){
                    count++;
                }
                y-=arr[i];
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}