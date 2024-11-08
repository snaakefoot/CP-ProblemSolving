#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 ll n,k;cin>>n>>k;
 ll a[n];
 for(int i=0;i<n;++i)
  cin>>a[i];
 ll l=0,r=1e13,mid,ans=-1,k0;
 while(l<=r){
  mid=(l+r)/2ll;
  k0=k;
  for(int i=0;i<n;++i){
   k0-=max(0ll,mid-a[i]);
   
  }
  if(k0>=0){
   l=mid+1;
   ans=mid;
 
  }
  else
   r=mid-1;
 }
 ll best=0;
 for(int i=0;i<n;++i){
  if(a[i]<ans){
   k-=ans-a[i];
   a[i]=ans;
  }
  else
   if(a[i]>ans){
   best++;
  }
 }
 
 
 
 
 cout<<ans+(ans-1ll)*(n-1ll)+best+k<<endl;
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