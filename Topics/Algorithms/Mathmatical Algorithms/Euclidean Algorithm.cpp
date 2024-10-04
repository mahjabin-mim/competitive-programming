#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

// Euclidean Algorithm
int gcd(int a, int b) 
{ 
  if(b==0) 
    return a; 
  return gcd(b,a%b); //__gcd(a,b);
} 

int main() 
{
    optimized
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    return 0;
}