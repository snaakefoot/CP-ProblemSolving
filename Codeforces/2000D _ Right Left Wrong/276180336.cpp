#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 ll n,ans=0;cin>>n;
 int a[n];
 ll pref[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
  if(i)
   pref[i]=pref[i-1]+a[i];
  else
   pref[i]=a[i];
 }
 bool occ[n]={0};
 
 string ch;cin>>ch;
 int i=0,j=n-1;
 while(i<j){
  while(i<=j && ch[i]=='R')
   ++i;
  while(j>=i && ch[j]=='L')
   --j;
  if(j>i){
   ans+=pref[j];
   if(i)
    ans-=pref[i-1];
  }
  ++i;
  --j;
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