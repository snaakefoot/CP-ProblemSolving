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
  int n;
  cin>>n;
  string ch;cin>>ch;
  set<char> c;
  ll ans=0;
  for(int i=0;i<n;++i){
   c.insert(ch[i]);
   ans+=c.size();
  }
  cout<<ans<<endl;
  
 }
    return 0;
}