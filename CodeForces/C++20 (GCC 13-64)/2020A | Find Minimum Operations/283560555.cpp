#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e8+7;
const int MAXN=1e6;
 
void solve() {
 ll n,k;
 cin>>n>>k;
 if(k==1){
  cout<<n<<endl;
  return;
 }
 ll cnt=0,x=1,prev;
 while(n){
  x=1,prev=1;
  while(x<=n){
   prev=x;
   x*=k;
  }
  cnt+=n/prev;
  n%=prev;
  
 }
 cout<<cnt<<endl;
 
 
}
 
int main(){
 //freopen("walk_the_line_input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 FAST;
 int t,cnt=1;cin>>t;
 while(t--){
  //cout<<"Case #"<<cnt<<": "; 
  //++cnt;
  solve();
  
 }
 
    return 0;
}