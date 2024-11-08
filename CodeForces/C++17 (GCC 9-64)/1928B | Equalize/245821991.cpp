 
#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
const int MAXN = 1e6;
 
 
 
 
 
 
void solve() {
 int n;cin>>n;
 int a[n];
 set<int> s;
 int mn=1e9+2;
 for(int i=0;i<n;++i){
  cin>>a[i];
  s.insert(a[i]);
 }
 vector<int> v;
 for(int u:s)
  v.push_back(u);
 int sz=v.size(),x,best=0;
 for(int i=sz-1;i>=0;--i){
  x=v[i]+1;
  auto it=lower_bound(v.begin(),v.end(),x-n);
  best=max(best,(int)(i-(int)distance(v.begin(),it)+1));
  
 }
 
 cout<<best<<endl;
 
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