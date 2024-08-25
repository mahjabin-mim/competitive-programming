//
//  main.cpp
//  HigherMath
//
//  Created by Mahjabin Mim on 10/8/22.
//

#include <iostream>

using namespace std;

int main() {
    
    int t,a,b,c,x,y,i;
    cin>>t;
    
    for(i=1; i<=t; i++){
        
        cin>>a>>b>>c;
        int arr[3]= {a,b,c};

        sort(arr,arr+3);
        
        if(arr[2]*arr[2] == (arr[1]*arr[1]) + (arr[0]*arr[0])){
            cout<<"Case "<<i<<": yes\n";
        }else{
            cout<<"Case "<<i<<": no\n";
        }

//        if(a>b){
//            if(a>c){
//                x = b*b + c*c;
//                y = a*a;
//
//                if(x==y){
//                    cout<<"Case "<<i<<": yes\n";
//                }else{
//                    cout<<"Case "<<i<<": no\n";
//                }
//            }else{
//                x = b*b + a*a;
//                y = c*c;
//
//                if(x==y){
//                    cout<<"Case "<<i<<": yes\n";
//                }else{
//                    cout<<"Case "<<i<<": no\n";
//                }
//            }
//        }else{
//            if(b>c){
//                x = a*a + c*c;
//                y = b*b;
//
//                if(x==y){
//                    cout<<"Case "<<i<<": yes\n";
//                }else{
//                    cout<<"Case "<<i<<": no\n";
//                }
//            }else{
//                x = b*b + a*a;
//                y = c*c;
//
//                if(x==y){
//                    cout<<"Case "<<i<<": yes\n";
//                }else{
//                    cout<<"Case "<<i<<": no\n";
//                }
//            }
//        }
    }
    return 0;
}
