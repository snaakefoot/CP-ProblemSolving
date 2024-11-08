#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
  int n,m,k;cin>>n>>m>>k;
 
  for(int i=0;n-i>m;++i){
   cout<<n-i<<' ';
  }
  for(int i=1;i<=m;++i)
   cout<<i<<' ';
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