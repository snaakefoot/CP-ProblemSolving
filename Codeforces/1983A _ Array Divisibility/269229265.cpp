#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
long long power(long long x, long long y, long long m = 1e18) {
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
bool isprime(int x){
 for(int i=2;i*i<=x;++i)
  if(x%i==0)
   return false;
 return true;
}
 
void solve() {
  ll n;cin>>n;
  for(int i=0;i<n;++i)
   cout<<i+1<<' ';
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