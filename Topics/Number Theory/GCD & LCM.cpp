#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int gcd(int a, int b) 
{ 
  if(a==0) 
    return b; 
  return gcd(b%a,a); //__gcd(a,b);
} 

int findGCD(int arr[], int n) 
{ 
  int result=arr[0]; 
  for (int i=1; i<n; i++){ 
    result=gcd(arr[i], result); 
    if(result==1){
        return 1; 
    } 
  } 
  return result; 
}

int findLCM(int arr[], int n)
{
    int ans=arr[0];
    for (int i=1; i<n; i++){
      ans = (((arr[i]*ans)) / (gcd(arr[i], ans)));
    }
    //lcm=(a*b)/gcd(a,b);  
    return ans;
}

int main() 
{
    optimized
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findGCD(arr, n)<<endl;
    cout<<findLCM(arr, n)<<endl;

    return 0;
}