#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define pf push_front
#define F first
#define S second
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vc vector<char>
#define mii map<int,int>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msl map<string,ll>
#define all(a) (a).begin(),(a).end()
#define rall(a) a.rbegin(),a.rend()
#define allg(x) x.begin(),x.end(),greater<int>()
#define maxel *max_element
#define minel *min_element
#define unq(v) v.erase(unique(v.begin(),v.end()),v.end());
#define sorted(v) is_sorted(v.begin(),v.end())
#define YES cout << "YES"<<endl
#define NO cout << "NO"<<endl
#define Yes cout << "Yes"<<endl
#define No cout << "No"<<endl
#define MOD 1000000007  // 1e9+7
#define sz size()
#define vp vector<pair<ll,ll>>
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define fr2(i,a,b) for(ll i=a;i>=b;i--)
const ll INF = LONG_MAX;
const int MIN = INT_MIN;
const ll mx=1e7+123;
ll divx[mx];

bool compare(pair<ll,ll> p1,pair<ll,ll>p2)
{
    if(p1.first<p2.first)return false;
    else if(p1.first>p2.first)return true;
    return p1.second<p2.second;
}
int manhatan(int x1, int y1, int x2, int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}
void nod(ll n)//harmonic series
{
    for(ll i=1; i<=n; i++)
    {
        for(ll j=i; j<=n; j=j+i)
        {
            divx[j]++;
        }
    }
}

//main code here
void solve()
{
    string s;
    cin>>s;
    map<char,ll> mp;
    for(ll i=0;i<s.size();i++)
    {
       mp[s[i]]++;

    }
    vll v;
    for(auto u:mp)
    {
        v.pb(u.S);
    }
    sort(allg(v));
    ll sum=0;
    if(v.size()>1)sum=v[0]+v[1];
    else if(v.size()==1)sum=v[0];

    cout<<s.size()-sum<<endl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }


}


