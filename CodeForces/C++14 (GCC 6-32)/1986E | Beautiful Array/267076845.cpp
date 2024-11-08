#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=998244353;
const int MAXN=5*1e5+1;
 
void solve() {
 int n,k,ans=0;
 cin>>n>>k;
 int a[n];
 map<int,vector<int> > m;
 for(int i=0;i<n;++i){
  cin>>a[i];
  m[a[i]%k].push_back(a[i]);
 }
 
 int  test=0,cnt=0;
 vector<int> vans;
 for(auto p:m){
  vector<int> v=p.second;
  sort(v.begin(),v.end());
  if(v.size()%2==1){
   ++cnt;
   vans=v;
  
  }
  else{
   for(int i=0;i<v.size()-1;i+=2)
    ans+=(v[i+1]-v[i])/k;
  }
 }
 
 int ans1=0,ans11;
 if(cnt>1){
  cout<<-1<<endl;
  return;
 }
 else
 if(cnt==0){
  cout<<ans<<endl;
  return;
 }
 else{
  for(int i=1;i<vans.size()-1;i+=2){
   ans1+=(vans[i+1]-vans[i])/k;
  }
 
  ans11=ans1;
  int sz=vans.size();
  for(int i=0;i<sz-2;i+=2){
  
   ans1+=(vans[i+1]-vans[i])/k-(vans[i+2]-vans[i+1])/k;
   ans11=min(ans11,ans1);
  }
  cout<<ans+ans11<<endl;
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