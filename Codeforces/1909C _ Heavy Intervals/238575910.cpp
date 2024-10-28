#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 
 while(t--){
  int n;
  cin>>n;
  ll c[n];
  set<ll> l;
  set<ll> r;
  ll x;
  for(int i=0;i<n;++i){
   cin>>x;
   l.insert(x);
  }
  for(int i=0;i<n;++i){
   cin>>x;
   r.insert(x);
  }
  for(int i=0;i<n;++i)
   cin>>c[i];
  vector<pair<ll,ll> > v;
  sort(c,c+n);
  ll ans=0;
  vector<ll > d;
  
  for(ll ri: r){
   auto it=l.upper_bound(ri);
   it--;
   d.push_back((ri-*it));
   l.erase(it);
  }
  sort(d.begin(),d.end());
  for(int i=0;i<n;++i)
   ans+=d[i]*c[n-1-i];
  cout<<ans<<endl;
 }
    return 0;
}