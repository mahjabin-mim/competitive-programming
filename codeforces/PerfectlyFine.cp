#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t; //testCase
    
    while(t--){ 
        int n;
        cin>>n; //numberOfBooks
        
        int store11 = 300000;
        int store10 = 300000;
        int store01 = 300000;
        
        while(n--){
            int m,b;
            cin>>m>>b; //minuteSkill
            
            if(b==11){
                if(store11 > m){
                    store11 = m;
                }else{
                    store11=store11;
                }
            }
            else if(b==10){
                if(store10 > m){
                    store10 = m; 
                }else{
                    store10=store10;
                }
            }
            else if(b==01){
                if(store01 > m){
                    store01 = m; 
                }else{
                    store01=store01;
                }
            }
        }
        
        int a,b;
        if(store10==300000 || store01==300000){
            if(store11==300000){
                cout<<"-1\n";
            }else{
                cout<<store11<<"\n";
            }
        }
        else if(store11 != 300000){
            a= store01 + store10;
            b= store11;
        
            if(a>b){
                cout<<b<<"\n";
            }else{
                cout<<a<<"\n";
            }
        }
        else{
            a= store01 + store10;
            cout<<a<<"\n";
        }
    }

    return 0;
}