#include<bits/stdc++.h>
//#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
 
const ll  MAXN=1<<16;
const ll mod=1e9 +7;
 
/** Computes a^b modulo m in O(log m) time. */
long long power(long long x, long long y, long long m = mod) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}
void solve() {
 int n,x;cin>>n;
 for(int i=0;i<n;++i){
  cin>>x;
 }
for(int i=0;i<n;++i){
  cin>>x;
  cout<<power(2ll,x)<<endl;;
 }
 
 
 
 
}
 
int main(){
 //freopen("subsonic_subway_input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 FAST;
 int t=1,cnt=1;
 while(t--){
  //cout<<"Case #"<<cnt<<": "; 
  //++cnt;
  solve();
  
 }
 
    return 0;
}