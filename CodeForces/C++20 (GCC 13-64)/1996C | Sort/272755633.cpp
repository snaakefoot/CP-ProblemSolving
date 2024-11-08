#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
 int n,q;cin>>n>>q;
 string ch1,ch2;cin>>ch1>>ch2;
 int pref1[n][26];
 int pref2[n][26];
 for(int i=0;i<n;++i){
  for(int j=0;j<26;++j){
   if(i){
    pref1[i][j]=(ch1[i]==('a'+j))+pref1[i-1][j];
    pref2[i][j]=(ch2[i]==('a'+j))+pref2[i-1][j];
   }
   else{
    pref1[i][j]=(ch1[i]==('a'+j));
    pref2[i][j]=(ch2[i]==('a'+j));
   }
  }
 }
 int ans,l,r,nb1,nb2;
 while(q--){
  cin>>l>>r;
  --l;--r;
  ans=0;
  for(int j=0;j<26;++j){
   nb1=pref1[r][j];
   nb2=pref2[r][j];
   if(l){
    nb1-=pref1[l-1][j];
    nb2-=pref2[l-1][j];
   }
   ans+=abs(nb1-nb2);
  }
  cout<<ans/2<<endl;
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