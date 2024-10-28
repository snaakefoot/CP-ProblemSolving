#include<bits/stdc++.h>
#include <climits>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
 
void solve() {
  ll n,x,prev;cin>>n>>x;
  
  ll ans=(n*(n+1))/2ll;
  ll a[n];
  ll pref[n];
  ll dp[n]={0};
  vector<ll>v;
  for(int i=0;i<n;++i){
   cin>>a[i];
   if(i)pref[i]=(a[i]+pref[i-1]);
   else
    pref[i]=(a[i]);
   v.push_back(pref[i]);
  
  }
  
  for(int i=n-1;i>=0;--i){
   if(i)
    prev=pref[i-1];
   else
    prev=0;
   auto it=upper_bound(v.begin(),v.end(),x+prev);
   if(it!=v.end()){
    int j=distance(v.begin(),it);
    if(i==j){
     if(i!=n-1)
     dp[i]=1+dp[i+1];
    else
     dp[i]=1;
    }
    else
     if(j==n-1)
      dp[i]=1;
     else
     dp[i]=1+dp[distance(v.begin(),it)+1];
   }
   else
    dp[i]=0;
   
   ans-=dp[i];
  
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