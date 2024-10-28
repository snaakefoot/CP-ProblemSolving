#include<bits/stdc++.h>
//#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e8+7;
const int MAXN=1e6;
 
void solve() {
 int n,d,k;cin>>n>>d>>k;
 vector<int> l(k);
 vector<int> r(k);
 for(int i=0;i<k;++i)
  cin>>l[i]>>r[i];
 sort(l.begin(),l.end());
 sort(r.begin(),r.end());
 int cnt1=0,cnt2=0,j=0,mx=-1,mn=mod,ans1=0,ans2=0;
 for(int i=1;i<=n-d+1;++i){
  auto it1=upper_bound(l.begin(),l.end(),i+d-1);
  auto it2=lower_bound(r.begin(),r.end(),i);
  int s=distance(l.begin(),it1);
 
  if(it2!=r.begin()){
   it2--;
   s-=distance(r.begin(),it2)+1;
  }
  if(s>mx){
   ans1=i;
   mx=s;
  }
  if(s<mn){
   ans2=i;
   mn=s;
  }
 
 }
 
 cout<<ans1<<' '<<ans2<<endl;
 
}
 
int main(){
 //freopen("line_by_line_input.txt","r",stdin);
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