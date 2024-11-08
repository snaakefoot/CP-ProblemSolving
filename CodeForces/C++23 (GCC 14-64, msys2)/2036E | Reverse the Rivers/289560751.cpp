  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
void solve() {
 int n,m,q;cin>>n>>m>>q;
 int a[n][m];
 for(int i=0;i<n;++i){
  for(int j=0;j<m;++j){
   cin>>a[i][j];
  }
 }
 for(int i=1;i<n;++i){
  for(int j=0;j<m;++j){
   a[i][j]=(a[i][j]|a[i-1][j]);
 
  }
 
 }
 char o;
 int re,c,req;
 while(q--){
  cin>>req;
 
  int ansl=0,ansr=n-1,ans=-1;
  while(req--){
 
   cin>>re>>o>>c;--re;
   if(o=='>'){
    int l=0,r=n-1,mid;
    ans=n;
    while(l<=r){
     mid=(l+r)/2;
     if(a[mid][re]>c){
      r=mid-1;
      ans=mid;
     }
     else{
   
      l=mid+1;
     }
    }
   
    ansl=max(ansl,ans);
   }
   else{
    int l=0,r=n-1,mid;
    ans=n;
    while(l<=r){
     mid=(l+r)/2;
     if(a[mid][re]>=c){
      r=mid-1;
      ans=mid;
     }
     else{
     
      l=mid+1;
     }
    }
    --ans;
   
    ansr=min(ansr,ans);
   }
  
  }
  if(ansr>=ansl)
  cout<<ansl+1<<endl;
 else
  cout<<-1<<endl;
 }
 
  
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t=1;
 
 while(t--){
  solve();
 }
 
    return 0;
}