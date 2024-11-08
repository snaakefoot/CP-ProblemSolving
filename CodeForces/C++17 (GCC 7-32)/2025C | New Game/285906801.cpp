#include<bits/stdc++.h>
//#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
 
const ll  MAXN=1<<16;
const ll mod=1e9 +7;
 
void solve() {
 int n,k,x;cin>>n>>k;
 vector<int> v;
 vector<int> vs;
 set<int> s;
 for(int i=0;i<n;++i){
  cin>>x;
  v.push_back(x);
  s.insert(x);
 }
 for(int u:s)
  vs.push_back(u);
 sort(v.begin(),v.end());
 int ans=1,sz=vs.size();
 for(int i=0;i<sz;++i){
  int l=i,r=min(i+k-1,sz-1),mid,best=0;
  while(l<=r){
   mid=(l+r)/2;
   if(vs[i]+mid-i==(vs[mid])){
    l=mid+1;
    best=mid;
   }
   else
    r=mid-1;
  }
  auto it=lower_bound(v.begin(),v.end(),vs[i]);
  auto it2=upper_bound(v.begin(),v.end(),vs[best]);
 
  ans=max(ans,distance(it,it2));
  
 }
  cout<<ans<<endl;
 
 
}
 
int main(){
 //freopen("subsonic_subway_input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 FAST;
 int t,cnt=1;cin>>t;
 while(t--){
  //cout<<"Case #"<<cnt<<": "; 
  //++cnt;
  solve();
  
 }
 
    return 0;
}