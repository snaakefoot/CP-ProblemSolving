#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
void addEdge(vector<int> adj[], int x,
             int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}
 
void dfs(vector<int> adj[], int node, int l, 
            int p, int lvl[], int par[])
{
   lvl[node] = l;
   par[node] = p;
   
   for(int child : adj[node])
   {
      if(child != p)
        dfs(adj, child, l+1, node, lvl, par);
   }
}
 
int LCA(int a, int b, int par[], int lvl[])
{  
   if(lvl[a] > lvl[b])
    swap(a, b);
   int diff = lvl[b] - lvl[a];
 
   while(diff != 0)
   {
      b = par[b];
      diff--;
   }
    
   if(a == b)
    return a;
    
   while(a != b)
    a=par[a], b=par[b];
 
   return a;
}
 
vector<int> findPath(vector<int> adj[], int a, int b, int n)
{
 
    int lvl[n+1];
    int par[n+1];
    dfs(adj, 1, 0, -1, lvl, par);
    int lca = LCA(a, b, par, lvl);
 
    vector<int> path;
 
    while(a != lca)
      path.push_back(a), a = par[a];
 
    path.push_back(a);
 
    vector<int> temp;
 
    while(b != lca)
      temp.push_back(b), b=par[b];
 
    reverse(temp.begin(), temp.end());
   
    for(int x : temp)
      path.push_back(x);
   
 return path;
}
int dist[MAXN];
int paint(vector<int> adj[],int node, int p){
 int ans=0;
   for(int child : adj[node]){
 
 
      if(child != p){
  if(p!=-1)
   dist[child]=1+dist[node];
  else
   dist[child]=1;
 
        ans+=2+paint(adj, child, node);
   }
   }
   return ans;
}
 
 
void solve() {
  int n,a,b,x,y;cin>>n>>a>>b;
  vector<int> adj[n+1];
  
  dist[n-1]=-1;
  for(int i=0;i<n-1;++i){
   cin>>x>>y;
   addEdge(adj,x,y);
   dist[i+1]=-1;
  }
  vector<int> path=findPath(adj,b,a,n);
  int middlepoint=path[(path.size())/2],ans=(path.size())/2,mx=-1;
  dist[middlepoint]=0;
  ans+=paint(adj,middlepoint,-1);
 
  for(int i=0;i<n;++i){
   mx=max(mx,dist[i+1]);
  
  }
 
  cout<<ans-mx<<endl;
  
  
  
  
 
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