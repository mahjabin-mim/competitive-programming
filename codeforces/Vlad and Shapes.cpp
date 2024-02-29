#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    optimized
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string arr[n];
        int ind;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        bool sqr=false;
        for(int i=0; i<n; i++){
            if(arr[i]==arr[i+1]){
                int temp=stoi(arr[i]);
                if(temp!=0){
                    sqr=true;
                    break;
                }  
            }
        }

        if(sqr){
            cout<<"SQUARE\n";
        }else{
            cout<<"TRIANGLE\n";
        }
    }
    
    return 0;
}