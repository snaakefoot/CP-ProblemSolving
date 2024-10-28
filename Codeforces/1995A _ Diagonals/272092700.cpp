#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
 
void solve() {
  int n,k,y,mx=0;cin>>n>>k;
  if(k==0){
   cout<<0<<endl;
   return;
  }
  if(k<=n){
   cout<<1<<endl;
   return;
  }
  int ans=2;
  k-=n;
  y=n-1;
  while(k){
   k-=y;
   if(k<=0){
    cout<<ans<<endl;
    return;
   }
   else{
    ++ans;
    k-=y;
    if(k<=0){
    cout<<ans<<endl;
    return;
   }
   else{
    ++ans;
    y--;
   }
   }
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