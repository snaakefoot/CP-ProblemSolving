#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 int n;cin>>n;
 int a[n];
 int b[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
 }
 
 for(int i=0;i<n;++i){
  cin>>b[i];
 }
 int i=0,j=0;
 while(j<n){
  if(a[i]<=b[j]){
   ++i;
   ++j;
  }
  else
   ++j;
 }
 cout<<n-i<<endl;
 
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