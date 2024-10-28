#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,m,q,ans=0,x1,x2,x;cin>>n>>m>>q;
 int a[m];
 vector<int> v;
 for(int i=0;i<m;++i){
  cin>>a[i];
  v.push_back(a[i]);
 }
 sort(v.begin(),v.end());
 while(q--){
  cin>>x;
 
  auto it=lower_bound(v.begin(),v.end(),x);
  if(it==v.begin()){
   cout<<(*it)-1<<endl;
  }
  else
  if(it==v.end()){
   --it;
   cout<<n-(*it)<<endl;
  }
  else{
   x1=(*it);
   --it;
   x2=(*it);
   cout<<(x1-x2)/2<<endl;
  }
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