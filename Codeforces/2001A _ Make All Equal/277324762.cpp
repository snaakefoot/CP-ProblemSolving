#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,k,ans=0;cin>>n;
 int a[n];
 map<int,int> m;
 int mx=-1;
 for(int i=0;i<n;++i){
  cin>>a[i];
  m[a[i]]++;
  mx=max(mx,m[a[i]]);
 }
 
 cout<<n-mx<<endl;
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