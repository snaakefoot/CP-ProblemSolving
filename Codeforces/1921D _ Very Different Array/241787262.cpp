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
  ll n,m,x,ans=0;cin>>n>>m;
  ll a[n];
  
  ll c[m];
  
  for(int i=0;i<n;++i){
   cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<m;++i){
   cin>>c[i];
  }
  sort(c,c+m);
  int ia=0,ja=n-1,ic=0,jc=m-1;
  while(ia<=ja){
   if(abs(a[ia]-c[jc])>=abs(a[ja]-c[ic])){
    ans+=abs(a[ia]-c[jc]);
    ia++;
    jc--;
   }
   else{
    ans+=abs(a[ja]-c[ic]);
    ic++;
    ja--;
   }
  }
  cout<<ans<<endl;
 }
    return 0;
}