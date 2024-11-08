#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  int n,ans=-1,cnt=-1,mn=1e9+1;;cin>>n;
  int a[n];
  
  for(int i=0;i<n;++i){
   cin>>a[i];
   mn=min(mn,a[i]);
 
  }
  for(int i=0;i<n;++i){
  
   if(i)
    ans=max(ans,min(a[i],a[i-1]));
   if(i>1){
   multiset<int> s;
   s.insert(a[i-2]);
   s.insert(a[i-1]);
   s.insert(a[i]);
   auto it=s.begin();
   ++it;
   ans=max(ans,*it);
   }
   
 
  }
  cout<<ans<<endl;
  
 
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