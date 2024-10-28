#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,ans=0;cin>>n;
 int a[n];
 int occ[n+1]={0};
 bool test=true;
 cin>>a[0];
 occ[a[0]]=1;
  for(int i=1;i<n;++i){
  cin>>a[i];
  }
 for(int i=1;i<n;++i){
 
  test=false;
  if((a[i]>1 && occ[a[i]-1]))
   test=true;
  if(a[i]!=n && occ[a[i]+1])
   test=true;
  if(!test){
   break;
  }
  occ[a[i]]=1;
 }
 if(test){
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