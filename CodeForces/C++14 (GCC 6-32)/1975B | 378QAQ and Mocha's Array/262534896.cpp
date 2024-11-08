#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  int n,g=0,cnt=-1;cin>>n;
  int a[n];
  bool visited[n];
  map<int,int> m;
  bool test=true;
  for(int i=0;i<n;++i){
   cin>>a[i];
   visited[i]=false;
   m[a[i]]=i;
   g=__gcd(g,a[i]);
  }
  
  if(m.find(g)!=m.end()){
  
   cout<<"Yes"<<endl;
   return;
  }
  sort(a,a+n);
  for(int i=1;i<n;++i){
   if(a[i]%a[0]==0)
    visited[i]=true;
   else{
    if(cnt==-1)
     cnt=i;
   }
   
  }
  if(cnt==-1){ 
   cout<<"Yes"<<endl;
   return;
  }
  for(int i=cnt+1;i<n;++i){
   if(a[i]%a[cnt]!=0 && !visited[i])
    test=false;
  }
  if(test){
  
   cout<<"Yes"<<endl;
  }
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