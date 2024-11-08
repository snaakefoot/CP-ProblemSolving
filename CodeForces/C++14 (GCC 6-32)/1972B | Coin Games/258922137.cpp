#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  int n,nb=0;cin>>n;
 string ch;cin>>ch;
 for(int i=0;i<n;++i){
  if(ch[i]=='U')
   ++nb;
 }
 if(nb&1)
  cout<<"YES"<<endl;
 else
  cout<<"No"<<endl;
 
 
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