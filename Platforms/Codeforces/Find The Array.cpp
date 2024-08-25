#include<iostream>
using namespace std;
int main()
{
    int j,t,c=0,sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int s;
        cin>>s;
        for(j=1;sum<s;j+=2){
            sum+=j;
            c++;
        }
        cout<<c<<endl;
        c=0;
        sum=0;
    }
    return 0;
}