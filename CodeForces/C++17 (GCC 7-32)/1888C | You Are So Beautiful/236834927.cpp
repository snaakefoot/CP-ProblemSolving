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
  int n;cin>>n;
  int a[n];
  set<int> s;
  int fir[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   if(s.find(a[i])==s.end()){
    fir[i]=1;
    s.insert(a[i]);
   }
   else
    fir[i]=0;
  }
  set<int> s1;
  ll ans=0;
  for(int i=n-1;i>=0;--i){
   s1.insert(a[i]);
   if(fir[i]){
    ans+=(s1.size());
   }
  }
  cout<<ans<<endl;
  
 }
    return 0;
}