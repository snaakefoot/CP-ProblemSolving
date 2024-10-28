  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;
long long power(long long x, long long y, long long m = mod) {
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
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 
 while(t--){
  ll n;cin>>n;
  ll a[n];
  
  map<ll,ll> m;
  set<ll> s;
  ll tot=0,ptot=1;
  for(int i=0;i<n;++i){
   cin>>a[i];
   ptot*=a[i];
   m[a[i]]++;
   s.insert(a[i]);
 
  }
  tot=(n*(n-1))/2ll;
 
  ll sz=s.size(),cnt=0;
  ll b[sz];
  ll suff[sz];
  ll ans=0;
  for(auto u:s){
   b[cnt]=(u*m[u])%mod;
 
   ++cnt;
   ans+=(((u*u)%mod)*((m[u]*(m[u]-1))/2ll)%mod)%mod;
   
   ans%=mod;
  }
  suff[sz-1]=b[sz-1];
  for(int i=sz-2;i>=0;--i){
   suff[i]=suff[i+1]+b[i];
   suff[i]%=mod;
  }
 
  for(int i=0;i<sz-1;++i){
   ans+=(b[i]*suff[i+1])%mod;
   
   ans%=mod;
 
  }
 
  ans*=power(tot,mod-2,mod);
  ans%=mod;
  cout<<ans<<endl;
 }
 
    return 0;
}