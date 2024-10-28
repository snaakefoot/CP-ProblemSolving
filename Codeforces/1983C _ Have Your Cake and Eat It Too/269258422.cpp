#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
long long power(long long x, long long y, long long m = 1e18) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}
bool isprime(int x){
 for(int i=2;i*i<=x;++i)
  if(x%i==0)
   return false;
 return true;
}
 
void solve() {
  int  n,fa=-1,fb=-1,fc=-1;cin>>n;
  int a[n];
  int b[n];
  int c[n];
  ll prefa[n];
  ll prefb[n];
  ll prefc[n];
  ll s=0,t;
  for(int i=0;i<n;++i){
   cin>>a[i];
   s+=a[i];
   if(i)
    prefa[i]=prefa[i-1]+a[i];
   else
    prefa[i]=a[i];
  }
  t=(s+2)/3ll;
  for(int i=0;i<n;++i){
   cin>>b[i];
   if(i)
    prefb[i]=prefb[i-1]+b[i];
   else
    prefb[i]=b[i];
  }
  for(int i=0;i<n;++i){
   cin>>c[i];
   if(i)
    prefc[i]=prefc[i-1]+c[i];
   else
    prefc[i]=c[i];
   if(fa==-1 && prefa[i]>=t)
    fa=i;
   if(fb==-1 && prefb[i]>=t)
    fb=i;
   if(fc==-1 && prefc[i]>=t)
    fc=i;
  }
  bool test=false;
  int i=fa+1;
  while(i<n){
   if(prefb[i]-prefb[fa]>=t)
    break;
   ++i;
  }
  if(i<n && prefc[n-1]-prefc[i]>=t){
   cout<<1<<' '<<fa+1<<' '<<fa+2<<' '<<i+1<<' '<<i+2<<' '<<n<<endl;
   return;
  }
  i=fa+1,s=0;
  while(i<n){
   if(prefc[i]-prefc[fa]>=t)
    break;
   ++i;
  }
  if(i<n && prefb[n-1]-prefb[i]>=t){
   cout<<1<<' '<<fa+1<<' '<<i+2<<' '<<n<<' '<<fa+2<<' '<<i+1<<endl;
   return;
  }
  i=fb+1,s=0;
  while(i<n){
   if(prefa[i]-prefa[fb]>=t)
    break;
   ++i;
  }
  if(i<n && prefc[n-1]-prefc[i]>=t){
   cout<<fb+2<<' '<<i+1<<' '<<1<<' '<<fb+1<<' '<<i+2<<' '<<n<<endl;
   return;
  }
  i=fb+1,s=0;
  while(i<n){
   if(prefc[i]-prefc[fb]>=t)
    break;
   ++i;
  }
  if(i<n && prefa[n-1]-prefa[i]>=t){
   cout<<i+2<<' '<<n<<' '<<1<<' '<<fb+1<<' '<<fb+2<<' '<<i+1<<endl;
   return;
  }
  
  i=fc+1,s=0;
  while(i<n){
   if(prefa[i]-prefa[fc]>=t)
    break;
   ++i;
  }
  if(i<n && prefb[n-1]-prefb[i]>=t){
   cout<<fc+2<<' '<<i+1<<' '<<i+2<<' '<<n<<' '<<1<<' '<<fc+1<<endl;
   return;
  }
  i=fc+1,s=0;
  while(i<n){
   if(prefb[i]-prefb[fc]>=t)
    break;
   ++i;
  }
  if(i<n && prefa[n-1]-prefa[i]>=t){
   cout<<i+2<<' '<<n<<' '<<fc+2<<' '<<i+1<<' '<<1<<' '<<fc+1<<endl;
   return;
  }
  
  cout<<-1<<endl;
 
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