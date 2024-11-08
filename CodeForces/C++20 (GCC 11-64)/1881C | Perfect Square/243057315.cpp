#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
void solve() {
 int n;cin>>n;
 char ma[n][n];
 for(int i=0;i<n;++i)
  for(int j=0;j<n;++j)
   cin>>ma[i][j];
 int ans=0;
 for(int i=0;i<n/2;++i){
  for(int j=0;j<n/2;++j){
   char c=max(max(ma[i][j],ma[j][n-1-i]),max(ma[n-1-i][n-1-j],ma[n-1-j][i]));
   ans+=c-ma[i][j];
   ans+=c-ma[j][n-1-i];
   ans+=c-ma[n-1-i][n-1-j];
   ans+=c-ma[n-1-j][i];
  }
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