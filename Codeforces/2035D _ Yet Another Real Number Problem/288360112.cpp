  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 long long power(long long x, long long y, long long m = mod) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res%m;
}
void solve() {
 ll n,x,pot;cin>>n;
 ll a[n];
 ll pref[n];
 long double loga[n];
 ll po2[n];
 ll pref_po2[n];
 stack<pair<long double,int> > st;
 ll follow[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
  po2[i]=0;
  while(a[i]%2ll==0){
   po2[i]++;
   a[i]/=2ll;
  }
  loga[i]=log2(1.*a[i]);
  if(i){
   pref_po2[i]=(pref_po2[i-1]+po2[i])%mod;
   pref[i]=(a[i]+pref[i-1])%mod;
  }
  else{
   pref_po2[i]=po2[i];
   pref[i]=a[i];
  }
  loga[i]+=1.*pref_po2[i];
 
 }
 for(int i=0;i<n;++i){
  while(!st.empty()){
   auto t=st.top();
   if(t.first>=loga[i])
    break;
   else
    st.pop();
  }
  if(st.empty())
   follow[i]=0;
  else{
   auto t=st.top();
   follow[i]=(st.top()).second+1;
  }
  
  st.push(make_pair(loga[i],i));
 }
 
 ll dp[n];
 for(int i=0;i<n;++i){
  int nexti=follow[i];
  if(nexti){
   dp[i]=(dp[nexti-1]+((pref[i]-pref[nexti-1]+mod)%mod))%mod+(a[i]*((power(2ll,(pref_po2[i]-pref_po2[nexti-1]+mod)%mod)-1ll+mod)%mod))%mod;
  }
  else{
   dp[i]=pref[i]+(a[i]*((power(2ll,pref_po2[i])-1ll+mod)%mod))%mod;
  }
  dp[i]%=mod;
  cout<<dp[i]<<' ';
 }
 cout<<endl;
 
 
 
 
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 
 while(t--){
  solve();
 }
 
    return 0;
}