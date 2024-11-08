#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmax=1e5+1;
vector<int> adj[Nmax];
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  int n,u,v;cin>>n;
  for(int i=0;i<n;++i){
   adj[i].clear();
   
  }
  for(int i=0;i<n-1;++i){
   cin>>u>>v;
   --u;--v;
   adj[u].push_back(v);
   adj[v].push_back(u);
   
  }
  int ans=0;
  for(int i=0;i<n;++i){
   if(adj[i].size()==1)
    ++ans;
   
  }
  cout<<ans/2+ans%2<<endl;
  
 }
    return 0;
}