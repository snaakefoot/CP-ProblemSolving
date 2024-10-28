#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,k,ans=0;cin>>n;
 int a[n];
 if(n%2==0){
  cout<<-1<<endl;
  return;
 }
 if(n==1){
    cout<<1<<endl;
  return;
 }
 int cnt=1;
 for(int i=0;i<n/2;++i){
  a[i]=cnt;
  a[n-1-i]=cnt+1;
  cnt+=2;
 }
 a[n/2]=cnt;
for(int i=0;i<n;++i){
 cout<<a[i]<<' ';
}
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