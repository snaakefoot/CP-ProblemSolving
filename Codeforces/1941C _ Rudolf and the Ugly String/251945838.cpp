#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;
 
 
void solve() {
 int n,ans=0;cin>>n;
 string ch;cin>>ch;
 for(int i=2;i<n;++i)
  if(ch.substr(i-2,3)=="map" ||ch.substr(i-2,3)=="pie")
    ++ans;
 for(int i=4;i<n;++i)
  if(ch.substr(i-4,5)=="mapie")
    --ans;
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