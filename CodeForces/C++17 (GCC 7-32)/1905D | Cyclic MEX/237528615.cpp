#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmax=1e6+1;
ll dp[2*Nmax];
vector<ll> v;
ll nexti[2*Nmax];
ll n;
ll trouve(ll i){
 
 if(dp[i]!=-1)
  return dp[i];
 if(v[i]==0)
  return 0;
 ll ans=(nexti[i]-i)*v[i]+trouve(nexti[i]%n);
 
 return dp[i]=ans;
 
}
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  int x;cin>>n;
  stack<pair<int,int> > s;
  v.clear();
  vector<int> v1;
  for(int i=0;i<n;++i){
   cin>>x;
   v1.push_back(x);
   dp[i]=-1;
  }
  for(int i=n-1;i>=0;i--)
   v.push_back(v1[i]);
  for(int i=0;i<n;++i){
   dp[i+n]=-1;
   v.push_back(v[i]);
  }
  
  for(int i=2*n-1;i>=0;--i){
   while(!s.empty() && (s.top()).first>=v[i]){
     s.pop();
   }
   if(!s.empty())
   nexti[i]=((s.top()).second);
  
  
   s.push(make_pair(v[i],i)); 
  }
  ll mx=-1;
  for(int i=0;i<n;++i){
   
   mx=max(mx,n+trouve(i));
  }
  cout<<mx<<endl;
 }
    return 0;
}