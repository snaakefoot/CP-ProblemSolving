#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 FAST;
 int t;cin>>t;
 while(t--){
  int n,nbs=0,nbf=0,nb=0;cin>>n;
  string s,f;cin>>s>>f;
  for(int i=0;i<n;++i){
   if(s[i]=='1')
    ++nbs;
   if(f[i]=='1')
    ++nbf;
   if(s[i]!=f[i])
    ++nb;
  }
  int ans=abs(nbs-nbf);
  nb-=ans;
  ans+=(nb+1)/2;
  cout<<ans<<endl;
 }
    return 0;
}