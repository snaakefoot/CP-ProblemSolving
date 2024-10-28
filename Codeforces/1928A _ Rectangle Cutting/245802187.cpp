 
#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
const int MAXN = 1e6;
 
 
 
 
 
 
void solve() {
 int a,b;cin>>a>>b;
 if(a>b){
  
  swap(a,b);
 }
 if(a%2==0){
  cout<<"YES"<<endl;
  return;
 }
 if(b%2==0){
  if(b/2!=a){
   cout<<"YES"<<endl;
 return;}
 }
 cout<<"NO"<<endl;
 
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