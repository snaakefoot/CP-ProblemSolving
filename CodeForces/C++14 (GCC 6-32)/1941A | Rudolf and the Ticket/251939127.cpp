#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;
 
 
void solve() {
 int n,m,k,x;cin>>n>>m>>k;
 vector<int> b;
 vector<int> c;
 for(int i=0;i<n;++i){
  cin>>x;
  b.push_back(x);
 }
 
 for(int i=0;i<m;++i){
  cin>>x;
  c.push_back(x);
 }
 sort(b.begin(),b.end());
 sort(c.begin(),c.end());
 int ans=0;
 for(int i=0;i<n;++i){
  if(b[i]>k)
   break;
  auto it=upper_bound(c.begin(),c.end(),k-b[i]);
  if(it==c.begin())
   continue;
  --it;
  ans+=distance(c.begin(),it)+1;
 }
 cout<<ans<<endl;
 
 
 
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