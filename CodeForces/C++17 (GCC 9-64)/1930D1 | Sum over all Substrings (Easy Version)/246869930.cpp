#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
const int MAXN = 1e6;
 
 
 
 
 
 
void solve() {
 int x,n,l;cin>>n;
 string ch;cin>>ch;
 ll ans=0;
 
 for(int i=0;i<n;i++){
  for(int j=i;j<n;j++){
   int l=i,r;
   
   while(l<=j && ch[l]=='0')
    ++l;
   while(l<=j){
    r=l+1;
    
    while(r<=j && ch[r]=='1')
     ++r;
    if(r-l==1)
     ans++;
    else
    ans+=(r-l)/3+(1+(r-l)%3)/2;
    if(((r-l)%3==1 ) && r+1<=j && ch[r+1]=='1'){
  
     l=r+2;
    }
    else
     l=r;
    while(l<=j && ch[l]=='0')
     ++l;
   }
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