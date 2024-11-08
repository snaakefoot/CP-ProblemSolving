#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
 
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 
 while(t--){
  ll a,b;cin>>a>>b;
  ll ans=(a*b)/(__gcd(a,b));
  if(ans==max(a,b))
   ans*=max(a,b)/(__gcd(a,b));
  cout<<ans<<endl;
 
 }
    return 0;
}