#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n; 
    
    int min;
    int t1=a1*(k1-1);
    int t2=a2*(k2-1);
    if(n<=(t1+t2)){
        min=0;
    }else{
        min=n-(t1+t2);
    }

    int max;
    if(k1>k2){
        swap(k1,k2);
        swap(a1,a2);
    }
    if(n<=(a1*k1)){
        max=n/k1;
    }else{
        n-=(a1*k1);
        max=a1+(n/k2);
    }

    cout<<min<<" "<<max<<endl;

    return 0;
}
                                                            