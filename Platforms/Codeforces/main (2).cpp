#include <iostream>

using namespace std;

int main()
{
    long long n,h,w,count,a,b;
    cin>>n>>h>>w;
    
    count=0;
    for(int i=0; i<n; i++){
        
        cin>>a>>b;
        
        if(h<=a && w<=b){
            count++;
            //cout<<"yes"<<endl;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}
