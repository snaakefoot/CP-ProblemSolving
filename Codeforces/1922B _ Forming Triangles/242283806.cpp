#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
void solve() {
  map<ll,ll> m;
  int n;cin>>n;
  int a[n];
  set<ll> s;
  for(int i=0;i<n;++i){
   cin>>a[i];
   m[a[i]]++;
   s.insert(a[i]);
  }
  auto it=s.begin();
 
  ll ans=0,p,old=0;
  while(it!=s.end()){
   p=m[(*it)];
   if(p>2)
   ans+=((p-2)*(p-1)*(2*p-3)+3*(p-2)*(p-1))/12ll;
   if(p>1){
    ans+=(p*(p-1)*(old))/2ll;
   }
   old+=p;
   ++it;
   
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