#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
 
 
 int m;
// Returns modulo inverse of a with respect
// to m using extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e.,
// gcd(A, M) = 1
const int MAXN=2*1e5+1;
int n, t[4*MAXN];
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl]%m;
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] =(t[v*2]*t[v*2+1])%m;
    }
}
int query(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 1;
    if (l == tl && r == tr) {
        return t[v]%m;
    }
    int tm = (tl + tr) / 2;
    return (query(v*2, tl, tm, l, min(r, tm))*
           query(v*2+1, tm+1, tr, max(l, tm+1), r) )%m;
}
void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] =max( t[v*2] , t[v*2+1]);
    }
}
 
 
 
 
 
void solve() {
 cin>>n>>m;
 int a[n];
 ll ans=1;
 for(int i=0;i<n;++i){
  cin>>a[i];
  ans*=a[i];
  ans%=m;
 }
 build(a,1,0,n-1);
 string ch;
 cin>>ch;
 int i=0,j=n-1;
 for(int k=0;k<n;++k){
  cout<<query(1,0,n-1,i,j)<<' ';
  if(ch[k]=='L'){
 
   ++i;
  }
  else{
   --j;
  }
  
 }
 cout<<endl;
 
 
 
 
}
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 FAST;
 int t;cin>>t;
 while(t--){
  solve();
 }
   
    return 0;
}