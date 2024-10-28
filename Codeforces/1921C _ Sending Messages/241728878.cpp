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
  ll n,f,aa,b;cin>>n>>f>>aa>>b;
  ll a[n];
  ll prev=0;
  for(int i=0;i<n;++i){
   cin>>a[i];
  }
  for(int i=0;i<n;++i){
   f-=min((a[i]-prev)*aa,b);
   prev=a[i];
  }
  if(f>0)
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
 }
    return 0;
}