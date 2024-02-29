#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a,b,c;
        int count=0;
        bool flag=false;
        for(int i=2; i<sqrt(n); i++){
            if(n%i==0){
                if(count==0){
                    a=i;
                    count++;
                }else{
                    b=i;
                    c=n/i;
                    flag=true;
                    break;
                }
                n/=i;
            }
        }

        if(flag){
            set <int> s;
            s.insert(a);
            s.insert(b);
            s.insert(c);
            if(s.size()==3 && a>1 && b>1 && c>1){
                cout<<"YES\n";
                cout<<a<<" "<<b<<" "<<c<<endl;
            }else{
                cout<<"NO\n";
            }   
        }else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}