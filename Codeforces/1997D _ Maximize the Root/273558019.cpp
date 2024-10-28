#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
vector<int> adj[MAXN];
int a[MAXN];
bool childless[MAXN];
int dfs(int u, int p){
 int mn=mod;
 
 for(int v:adj[u]){
  
  if(v!=p){
 
  if(!childless[v]){
  dfs(v,u);
  }
  mn=min(mn,a[v]);
  }
 }
 
 
 if(mn>=a[u])
 a[u]+=(mn-a[u])/2;
 else
  a[u]=mn;
 return a[u];
}
void solve() {
 
 int n,u;cin>>n;
 
 for(int i=0;i<n;i++){
  cin>>a[i];
  adj[i].clear();
  childless[i]=true;
 }
 
 for(int i=1;i<n;++i){
  cin>>u;
  adj[u-1].push_back(i);
  childless[u-1]=false;
 }
 int mn=mod;
 for(int v:adj[0]){
  if(childless[v])
   mn=min(mn,a[v]);
  else
  mn=min(mn,dfs(v,0));
 }
 if(mn!=mod)
 cout<<a[0]+mn<<endl;
 else
  cout<<a[0]<<endl;
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