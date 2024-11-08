#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
int n, k;
vector<vector<int>> g;
vector<int> mt;
vector<bool> used;
 
bool try_kuhn(int v) {
    if (used[v])
        return false;
    used[v] = true;
    for (int to : g[v]) {
        if (mt[to] == -1 || try_kuhn(mt[to])) {
            mt[to] = v;
            return true;
        }
    }
    return false;
}
 
 
void solve() {
  int n,x,y;cin>>n>>x>>y;
  --x;
  --y;
  int a[n];
  for(int i=0;i<y;++i)
   if((y-i)%2)
    a[i]=-1;
   else
    a[i]=1;
  for(int i=y;i<=x;++i)
   a[i]=1;
  for(int i=x+1;i<n;++i)
   if((i-x)%2)
    a[i]=-1;
   else
    a[i]=1;
  for(int i=0;i<n;++i)
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