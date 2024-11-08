#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=998244353;
const int MAXN=2*1e5+1;
ll n, t[4*MAXN];
void build(ll a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] =max( t[v*2] ,t[v*2+1]);
    }
}
ll query(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return -1;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return max( query(v*2, tl, tm, l, min(r, tm))
           , query(v*2+1, tm+1, tr, max(l, tm+1), r) );
}
void update(int v, int tl, int tr, int pos, ll new_val) {
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
 
//contruct build(a,1,0,n-1); a is the array
// query query(1,0,n-1,i,j);
// update update(1,0,n-1,p,X);
void solve() {
 int l,r;cin>>n>>l>>r;;
 int a[n];
 ll pref[n];
 ll suff[n];
 ll dp[n];
 
 for(int i=0;i<n;++i){
  cin>>a[i];
  dp[i]=-1;
  if(i)
   pref[i]=a[i]+pref[i-1];
  else
   pref[i]=a[i];
 }
 suff[n-1]=a[n-1];
 for(int i=n-2;i>=0;--i){
  suff[i]=suff[i+1]+a[i];
 }
 dp[0]=(a[0]>=l && a[0]<=r);
 build(dp,1,0,n-1);
 for(int i=1;i<n;++i){
  ll ll=0,rr=i,mid,ansl=-1,ansr=-1,prev;
  if(i!=n-1)
    prev=suff[i+1];
  else
    prev=0;
  while(ll<=rr){
   mid=(ll+rr)/2;
   if(suff[mid]-prev<l){
    rr=mid-1;
   }
   else{
    ansl=mid;
    ll=mid+1;
   }
  }
  ll=0;rr=i;
  while(ll<=rr){
   mid=(ll+rr)/2;
   if(suff[mid]-prev<=r){
    rr=mid-1;
   }
   else{
    ansr=mid;
    ll=mid+1;
   }
  }
  ansr++;
 
  if(ansl<0 || ansr<0|| ansl<ansr){
   dp[i]=dp[i-1];
  }
  else{
   if(ansr!=0)
   dp[i]=1+query(1,0,n-1,ansr-1,ansl-1);
   else{
    if(ansl==0)
     dp[i]=1;
    else
     dp[i]=1+query(1,0,n-1,ansr,ansl-1);
   }
  }
  update(1,0,n-1,i,dp[i]);
 }
 cout<<dp[n-1]<<endl;
 
 
 
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