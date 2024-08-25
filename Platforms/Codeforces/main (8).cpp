#include <iostream>

using namespace std;

int main()
{
    long long n,k,count;
    cin>>n>>k;
    
    char replace = '0';
    
    string s;
    cin>>s;
    
    count=0;
    for(int i=s.length(); i>0; i--){
        
        int a = s[i];
        int b = s[i-1];
        if(a==b){
            s[i-1] = replace;
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
