#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 ll n,k,ans=0;cin>>n>>k;
 ll a[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
 }
 sort(a,a+n);
 for(int i=(n%2);i<n-1;i+=2){
 
  if(a[i+1]-a[i]>k){
   ans+=a[i+1]-a[i]-k;
   k=0;
  }
  else
   k-=(a[i+1]-a[i]);
 
 }
 if(n%2==0)
 cout<<ans<<endl;
 else
  cout<<ans+a[0]<<endl;
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