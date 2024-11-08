#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
 
 string ch;cin>>ch;
 ll n=ch.length();
 ll pref[n];
 map<ll,ll> m;
 m[0]++;
 ll ans=0,nb0=0,nb1=0;
 for(ll i=0;i<n;++i){
  nb0+=(ch[i]=='0');
  nb1+=(ch[i]=='1');
  pref[i]=nb1-nb0;
  ans+=m[pref[i]]*(n-i);
  m[pref[i]]+=i+2;
  ans%=mod;
 }
 cout<<ans<<endl;
 
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