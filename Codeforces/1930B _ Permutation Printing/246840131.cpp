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
 int a[n];
 int mn=1,mx=n;
 for(int i=0;i<n;i++){
  if(i%2){
   a[i]=mn;
  mn++;}
  else{
   a[i]=mx;
  mx--;}
   
 }
 for(int i=0;i<n;++i)
  cout<<a[i]<<' ';
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