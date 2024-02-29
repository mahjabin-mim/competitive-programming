#include <iostream>

using namespace std;

int main()
{
    int t,n,a,b,sum,c;
    string s;
    
    cin>>t;
    for(int i=0; i<t; i++){
        
        cin>>n;
        cin>>s;
        if(s.length()==n){
            
            a = s[0] - '0';
            b = s[1] - '0';
            sum = a+b;
            // cout<<sum;
            if(sum==2){
                sum = 0;
                cout<<"-";
            }else{
                cout<<"+";
            }
            
            if(s.length()>2){
                for(int j=2; j<n; j++){
                
                    c = s[j] - '0';   
                    sum = sum + c;
                    // cout<<sum;
                    if(sum==2){
                        sum=0;
                        cout<<"-";
                    }else{
                        cout<<"+";
                    }
                }
            }
            
        }
        
        cout<<endl;
    }
    
    return 0;
}
