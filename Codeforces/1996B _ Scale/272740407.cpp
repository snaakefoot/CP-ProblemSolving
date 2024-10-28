#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
 int n,k;cin>>n>>k;
 char a[n][n];
 for(int i=0;i<n;++i){
  for(int j=0;j<n;++j){
   cin>>a[i][j];
  }
 }
 for(int i=0;i*k<n;++i){
  for(int j=0;j*k<n;++j){
   cout<<a[i*k][j*k];
  }
  cout<<endl;
 }
 
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