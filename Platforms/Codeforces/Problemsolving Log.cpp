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

        string s;
        cin>>s;

        map <char,int> map;
        for(int i=0; i<s.length(); i++){
            int x = int(s[i])-64;
            map[x]++;
        } 

        int count=0;
        for(auto i:map){
            if(i.second>=i.first){
                count++;
            }
        }
        cout<<count<<endl;
    }
        
  return 0;
}