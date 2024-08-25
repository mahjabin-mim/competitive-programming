/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long long n,count,a;
    cin>>n;
    
    count=0;
    for(int i=0; i<n; i++){
        
        cin>>a;
        if(a%2!=0){
            count=1;
        } 
    }
    
    if(count==1){
        cout<<"first"<<endl;
    }else{
        cout<<"second"<<endl;
    }

    return 0;
}
