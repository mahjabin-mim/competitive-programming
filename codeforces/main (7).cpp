#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    int flag=0;
    for(int i=0; i<t; i++){
        cin>>n;
        
        int x=0, y=0;
        for(int j=0; j<n; j++){
            char c;
            cin>>c;
            
            if(c=='U'){
                y++;
                //cout<<x<<y<<endl;
            }else if(c=='R'){
                x++;
                //cout<<x<<y<<endl;

            }else if(c=='D'){
                y--;
                //cout<<x<<y<<endl;

            }else if(c=='L'){
                x--;
                //cout<<x<<y<<endl;

            }
            
            if(x==1 && y==1){
                cout<<"YES"<<endl;
                flag = 1;
                break;

            }
        }
        
        if(flag==0){
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}
