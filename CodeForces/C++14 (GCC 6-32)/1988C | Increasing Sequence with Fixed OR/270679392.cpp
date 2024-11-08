#include<bits/stdc++.h>
#include <climits>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
 
void solve() {
  ll n,x,cnt=0;cin>>n;
  x=n;
  vector<ll> v;
  while(x){
   if((x&1)){
    v.push_back((n ^ (1ll<<cnt)));
   }
   x>>=1ll;
   ++cnt;
  }
  if(v.size()==1){
   cout<<1<<endl;
   cout<<1<<endl;
   return;
  }
  cout<<v.size()+1<<endl;
  
  for(int i=v.size()-1;i>=0;--i)
   cout<<v[i]<<' ';
  cout<<n<<endl;
  
  
  
 
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