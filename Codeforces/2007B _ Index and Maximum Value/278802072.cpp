  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 ll n,m,mx=-1,l,r;cin>>n>>m;
 ll a[n];
 bool test=true;
 for(int i=0;i<n;++i){
  cin>>a[i];
  mx=max(a[i],mx);
 }
 char c;
 while(m--){
  cin>>c>>l>>r;
  if(mx<=r && mx>=l){
   if(c=='+')
    ++mx;
   else
    --mx;
  }
  cout<<mx<<' ';
 }
 cout<<endl;
 
 
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
cout.flush();
 int t;cin>>t;
 cout.flush();
 while(t--){
  solve();
 }
 
    return 0;
}