#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int MAXN=2*1e5+1;
int n, t[4*MAXN];
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] =max( t[v*2] ,t[v*2+1]);
    }
}
int query(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return -1;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return max( query(v*2, tl, tm, l, min(r, tm))
           , query(v*2+1, tm+1, tr, max(l, tm+1), r) );
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
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 
 while(t--){
  
  cin>>n;
  ll a[n];
 
  for(int i=0;i<n;++i){
   cin>>a[i];
  }
  ll ans=-1,g=0;
  sort(a,a+n);
  for(int i=0;i<n;++i){
   for(int j=i+1;j<n;++j){
    g=__gcd(g,(a[j]-a[i]));
   }
  }
 
   cout<<2*g<<endl;
  
 }
    return 0;
}