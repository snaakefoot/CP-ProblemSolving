#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 int n,m;cin>>n>>m;
 int ans=0;
 set<pair<int,int> > s;
 for(int a1=1;a1<=n;++a1){
  for(int q=1;q<=m && (q)*a1<=n;++q){
   if((a1+1)%q==0)
   s.insert(make_pair(a1*q,q));
  }   
 }
 cout<<s.size()<<endl;
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