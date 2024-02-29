#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

const int mx=1e5*2+11;
int arr[mx];
long long tree[mx*4];

void init(int node, int b, int e)
{
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int l=node*2;
    int r=node*2+1;
    int mid=(b+e)/2;
    init(l,b,mid);
    init(r,mid+1,e);
    tree[node]=(long long)tree[l]+tree[r];
}
 
void update(int node, int b, int e, int i, int newVal)
{
    if (i>e || i<b)
        return; 
    if (b>=i && e<=i) {
        tree[node]=newVal;
        return;
    }
    int l=node*2;
    int r=node*2+1;
    int mid=(b+e)/2;
    update(l,b,mid,i,newVal);
    update(r,mid+1,e,i,newVal);
    tree[node]=(long long)tree[l]+tree[r];
}
 
long long query(int node, int b, int e, int i, int j)
{
    if(i>e || j<b){
        return 0; 
    }
    if(b>=i && e<=j){
        return tree[node]; 
    }
    int l=node*2; 
    int r=node*2+1;
    int mid=(b+e)/2;
    long long lc=query(l,b,mid,i,j);
    long long rc=query(r,mid+1,e,i,j);
    return lc+rc; 
}
 
int main()
{ 
    optimized
    int n,q;
    cin>>n>>q;
    arr[0]=0;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
 
    init(1,1,n);
    for(int i=0; i<q; i++){
        int type;
        cin>>type;
 
        if(type==1){
            int k,u;
            cin>>k>>u;
            update(1,1,n,k,u);
        }else{
            int a,b;
            cin>>a>>b;
            cout<<query(1,1,n,a,b)<<endl;
        }
    }
    
    return 0;
}