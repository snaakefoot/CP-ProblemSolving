#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n;cin>>n;
 ll a[n];
 vector<ll> v;
 ll s=-1;
 for(int i=0;i<n;++i){
  cin>>a[i];
  if(a[i]%2)
   s=max(s,a[i]);
  else
   v.push_back(a[i]);
 }
 if(s==-1){
  cout<<0<<endl;
  return ;
 }
 sort(v.begin(),v.end());
 bool test=false;
 ll ans=0;
 for(ll u:v){
  if(u>s){
  test=true;
  }
 
   ans++;
   s+=u;
  
 }
 if(test)++ans;
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