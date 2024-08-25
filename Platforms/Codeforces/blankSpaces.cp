#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;
        
        int max=0;
        int count=0;
        while(x--){
            int a;
            cin>>a;

            if(a==0){
                count++;
            }else{
                if(max<count){
                    max=count;
                    count=0;
                }else{
                    count=0;
                }
            }
        }
        
        if(count>max){
            cout<<count<<"\n";
        }else{
            cout<<max<<"\n";
        }
    }
    return 0;
}