#include <iostream>

using namespace std;

int main()
{
    int t,n,b,c,count;
    cin>>t;
    
    for(int k=1; k<=t; k++){
        
        cin>>n;
        int a[101];

        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        
        count=0;
        for(int j=1; j<n; j++){
            
            b = a[j]; //1, 2, 3, 4, 5
            c = a[j+1]; //2, 3, 4, 5, 
            
            if(b%2 != 0){
                if(c%2 != 0){
                    count++;
                   // cout<<count<<endl;
                }
            }
            
            if(b%2 == 0){
                if(c%2 == 0){
                    count++;
                }
            }
        }
        
        cout<<count<<endl;

    }

    return 0;
}
