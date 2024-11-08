#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 int n,m;cin>>n;
 int ans=0,mx=-1;
 int a[n];
 for (int i=0;i<n-1;++i){
  cin>>a[i];
  mx=max(mx,a[i]);
 }
 mx*=2;
 ++mx;
 cout<<mx<<' ';
 for(int i=1;i<n;++i){
  cout<<mx+a[i-1]<<' ';
  mx+=a[i-1];
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