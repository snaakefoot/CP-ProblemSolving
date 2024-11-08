#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=998244353;
const int MAXN=5*1e5+1;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m;
bool getnxt(int i,int j,int k, int& x, int& y){
 x=i+dx[k];
 y=j+dy[k];
 return (x>=0 && x<n && y>=0 && y<m);
}
void solve() {
  cin>>n>>m;
  int x,cnt=0;
  set<int> s;
  string ch;cin>>ch;
  for(int i=0;i<m;++i){
   cin>>x;
   s.insert(x);
  }
  vector<char> c;
  char ch1;
  for(int i=0;i<m;++i){
   cin>>ch1;
   c.push_back(ch1);
  }
  sort(c.begin(),c.end());
  for(int u:s){
   ch[u-1]=c[cnt];
   ++cnt;
  }
  cout<<ch<<endl;
  
 
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