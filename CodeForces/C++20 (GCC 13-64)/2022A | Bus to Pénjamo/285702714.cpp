#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e8+7;
const ll  MAXN=1<<16;
 
 
 
void solve() {
 int n,r,ans=0,x=0;cin>>n>>r;
 int a[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
  x+=a[i]%2;
  ans+=a[i]-a[i]%2;
  r-=a[i]/2;
 }
 while(x>r){
  r--;
  x-=2;
 }
 cout<<ans+x<<endl;
 
 
}
 
int main(){
 //freopen("subsonic_subway_input.txt","r",stdin);
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