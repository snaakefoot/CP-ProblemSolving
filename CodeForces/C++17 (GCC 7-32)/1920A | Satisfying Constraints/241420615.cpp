#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmx=1e6+1;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 FAST;
 int t;cin>>t;
 while(t--){
  int n,nb=0;cin>>n;
 
  int a,x,l=-1*mod,r=mod;
  bool test;
  set<int> v;
  for(int i=0;i<n;++i){
   
   cin>>a>>x;
   if(a==1)
    l=max(l,x);
   if(a==2)
    r=min(r,x);
   if(a==3)
    v.insert(x);
 
  }
  int ans=0;
  if(l<=r){
  ans=r-l+1;
 
  for(int u:v)
   if(u>=l && u<=r)
    --ans;
  cout<<ans<<endl;
  }
  else
   cout<<0<<endl;
  
 }
    return 0;
}