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
 map<int,int,greater<int> > m;
 int mx=0;
 set<int,greater<int> > s;
 for(int i=0;i<n;++i){
  cin>>a[i];
  m[a[i]+i+1]++;
  mx=max(mx,a[i]+i+1);
  s.insert(a[i]+i+1);
 }
 int ans[n];
 int cnt=0;
 while(!s.empty()){
  ans[cnt]=mx;
  ++cnt;
  
  if(m[mx]>1){
   m[(mx-1)]+=m[mx]-1;
   s.insert(mx-1);
   s.erase(mx);
   mx=mx-1;
  }
  else{
   s.erase(mx);
   if(s.empty())
    break;
   
   mx=*(s.begin());
  }
 }
 for(int i=0;i<n;++i)
  cout<<ans[i]<<' ';
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