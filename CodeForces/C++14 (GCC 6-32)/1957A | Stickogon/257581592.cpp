#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 int n;cin>>n;
 map<int,int> m;
 int a[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
  m[a[i]]++;
 }
 int ans=0;
 for(auto p:m)
  
  ans+=(p.second)/3;
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