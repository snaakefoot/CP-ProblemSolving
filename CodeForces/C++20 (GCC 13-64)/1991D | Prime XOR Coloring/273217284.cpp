#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
int inv(int n){
 int r=0,cnt=0;
 while(cnt<30){
  if(!(n&1)){
   r+=(1<<cnt);
  }
  n>>=1;
  ++cnt;
 }
 return r;
}
void solve() {
 
 int n;cin>>n;
 if(n==1){
  cout<<1<<endl<<1<<endl;
  return;
 }
 if(n==2){
  cout<<2<<endl;
  cout<<1<<' '<<2<<endl;
  return;
 }
 if(n==3){
  cout<<2<<endl;
  cout<<1<<' '<<2<<' '<<2<<endl;
  return;
 }
 if(n==4){
  cout<<3<<endl;
  cout<<1<<' '<<2<<' '<<2<<' '<<3<<endl;
   return;
 }
 if(n==5){
  cout<<3<<endl;
  cout<<1<<' '<<2<<' '<<2<<' '<<3<<' '<<3<<endl;
   return;
 }
 int a[n];
 cout<<4<<endl;
 for(int i=1;i<=n;i+=4)
  a[i]=1;
  for(int i=2;i<=n;i+=4)
  a[i]=2;
  for(int i=3;i<=n;i+=4)
  a[i]=3;
  for(int i=4;i<=n;i+=4)
  a[i]=4;
  for(int i=1;i<=n;i++)
  cout<<a[i]<<' ';
 cout<<endl;
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