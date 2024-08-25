#include <iostream>

using namespace std;

int main()
{
    string n;
    int c,count;
    
    cin>>n;
    count=0;
    for(int i=0; i<n.length(); i++){
        
        c = n[i];
        if(c=='2'){
            count++;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}
