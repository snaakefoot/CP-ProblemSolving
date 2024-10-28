#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;
 
 
void solve() {
 int n,m,x;cin>>n>>m>>x;
 
 set<int> s;
 int r,w;
 char c;
 s.insert(x);
 while(m--){
  cin>>r>>c;
  set<int> s1;
  for(int u:s){
   if(c=='1' || c=='?'){
   w=(u+n-r)%n;
    if(w==0)
     w=n;
   s1.insert(w);
   
   }
   if(c=='0' || c=='?'){
    w=(u+r)%n;
    if(w==0)
     w=n;
    s1.insert(w);
   }
  }
  s=s1;
 }
 cout<<s.size()<<endl;
 for(int u:s)
  cout<<u<<' ';
 cout<<endl;
 
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