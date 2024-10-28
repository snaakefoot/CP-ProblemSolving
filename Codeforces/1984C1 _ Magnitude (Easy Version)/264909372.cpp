#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  int n,in=-1;cin>>n;
  ll s=0;
  int a[n];
  ll pref[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   s+=a[i];
   if(a[i]<0)
    in=i;
   if(i)
    pref[i]=a[i]+pref[i-1];
   else
    pref[i]=a[i];
  }
  ll mx=s;
  for(int i=0;i<n;++i){
   if(a[i]<0)
    mx=max(s+abs(pref[i])-pref[i],mx);
  }
  cout<<mx<<endl;
  
  
 
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