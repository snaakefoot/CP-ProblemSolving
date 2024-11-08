#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
  int n,m,k,prev;cin>>n>>m>>k;
 
  string ch;cin>>ch;
  int a[n+2];
  a[0]=1;
  a[n+1]=1;
  prev=0;
  int nextL[n+2];
  for(int i=0;i<n;++i){
   a[i+1]=(ch[i]=='L')-(ch[i]=='C');
   if(a[i+1]==1){
    nextL[prev]=i+1;
    prev=i+1;
   }
  }
  nextL[prev]=n+1;
  int i=0;
  while(i<n+1){
 
   if(nextL[i]-i<=m){
    i=nextL[i];
   }
   else{
    i+=m;
    while(k>=0 && a[i]==0){
     --k;
     ++i;
    }
    if(k<0 || a[i]==-1){
     cout<<"No"<<endl;
     return;
    }
   }
  
  }
  cout<<"Yes"<<endl;
  
  
 
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