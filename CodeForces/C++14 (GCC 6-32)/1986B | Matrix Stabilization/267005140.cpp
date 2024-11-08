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
  int a[n][m];
  int x,y,mx;
  for(int i=0;i<n;++i)
   for(int j=0;j<m;++j)
    cin>>a[i][j];
  for(int i=0;i<n;++i){
   for(int j=0;j<m;++j){
    mx=-1;
    for(int k=0;k<4;++k){
     
     if(getnxt(i,j,k,x,y)){
      
      mx=max(a[x][y],mx);
     }
    
    }
    
    if(a[i][j]>mx)
     a[i][j]=mx;
    cout<<a[i][j]<<' ';
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