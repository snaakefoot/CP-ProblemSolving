#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
  int n,k,nb1=0,s=0,mx=-1;cin>>n>>k;
  int a[k];
  for(int i=0;i<k;++i){
   cin>>a[i];
   s+=a[i]-1;
   nb1+=a[i];
   mx=max(mx,a[i]);
  }
  cout<<s-mx+1+nb1-mx<<endl;
  
  
 
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