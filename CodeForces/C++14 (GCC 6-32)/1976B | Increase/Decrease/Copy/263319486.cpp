#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  ll n,x=-1;cin>>n;
     ll a[n];
  ll b[n+1];
  vector<int> s;
  for(int j=0;j<n;++j){
   cin>>a[j];
   
  }
  for(int j=0;j<n+1;++j){
   cin>>b[j];
  }
  ll diff1[n],ans=0,mn=1e9+1,mx=-1;
 
  for(int i=0;i<n;++i){
   diff1[i]=abs(a[i]-b[i]);
   mn=min(mn,min(a[i],b[i]));
   mx=max(mx,max(a[i],b[i]));
   if((min(a[i],b[i]))>b[n])
    s.push_back(min(a[i],b[i]));
   else
    s.push_back(max(a[i],b[i]));
   if(b[n]>=min(a[i],b[i]) && b[n]<=max(a[i],b[i]))
    x=0;
   ans+=abs(a[i]-b[i]);
   
 
  }
  sort(s.begin(),s.end());
  if(x==-1){
   x=1e9+1;
   auto it= lower_bound(s.begin(),s.end(),b[n]);
   if(it!=s.end())
    x=min(x,abs(*(it)-b[n]));
   if(it!=s.begin()){
    --it;
    x=min(x,abs(*(it)-b[n]));
   }
    
  }
  cout<<ans+x+1<<endl;
  
  
 
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