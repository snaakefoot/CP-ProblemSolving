#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,ans=0;cin>>n;
 int a[n];
 for(int i=0;i<n;++i){
  cin>>a[i];
 }
 sort(a,a+n);
 
 if(n==2 && a[0]!=a[1]-1){
  cout<<"YES"<<endl;
 }
 else{
  cout<<"NO"<<endl;
 }
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