#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
void solve() {
  int n;cin>>n;
  bool test=false;
  string a,b,c;cin>>a>>b>>c;
  for(int i=0;i<n;++i)
   if((a[i]!=b[i] && b[i]!=c[i] && c[i]!=a[i])||(a[i]==b[i] && c[i]!=a[i]))
    test=true;
  if(test )
  cout<<"YES"<<endl;
  else
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