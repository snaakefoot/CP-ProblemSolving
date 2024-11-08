#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 ll n,k,x,y;cin>>n>>k;
 int a[n]={0};
 for(int i=0;i<k;++i){
  cin>>x>>y;
  a[x-1]=1;
  a[y-1]=1;
 }
 int goal=0;
 for(int i=0;i<n;++i){
  if (!a[i])
   ++goal;
 }
 int sz=max(2,goal+1);
 ll fib[goal+1];
 fib[0]=1;
 fib[1]=1;
 for(int i=2;i<=goal;++i)
  fib[i]=(fib[i-1]+((2ll*(i-1))%mod)*fib[i-2])%mod;
 cout<<fib[goal]<<endl;
 
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