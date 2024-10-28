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
  int n,mx=-1;cin>>n;
  map<int,int> m;
  int a[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   mx=max(a[i],mx);
   m[a[i]]++;
  }
  int cnt=0;
  for(auto u:m)
   if((u.second)%2==1)
    ++cnt;
  if(cnt)
   cout<<"Yes"<<endl;
  else
   cout<<"No"<<endl;
  
  
  
 
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