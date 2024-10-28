  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 int n,a1,b,cnt=0,x;cin>>n>>a1>>b;
 int g=__gcd(a1,b);
 set<int> s;
 for(int i=0;i<n;++i){
  cin>>x;
  s.insert(x);
 
 }
 int a[n];
 if(n==1){
  cout<<0<<endl;
  return;
 }
 set<int> mods;
 for(int u:s){
  a[cnt]=u;
  mods.insert(u%g);
  
 
 }
 int best=(*mods.rbegin())-*(mods.begin());
 
 auto it=mods.begin();
 auto it0=it;
 it++;
 
 while(it!=mods.end()){
  best=min(best,(*it0)+g-*(it));
  ++it;
  ++it0;
 }
 cout<<best<<endl;
 
 
 
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