#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
void solve() {
  int n;cin>>n;
  int a[n];
  int b[n];
  ll ans1=0,ans2=0;
  vector<pair<int,int> > va;
  vector<pair<int,int> > vb;
  for(int i=0;i<n;++i){
   cin>>a[i];
   va.push_back(make_pair(a[i],i));
  }
  for(int i=0;i<n;++i){
   cin>>b[i];
   vb.push_back(make_pair(b[i],i));
  }
  sort(va.begin(),va.end());
  sort(vb.begin(),vb.end());
  int ap[n];
  int bp[n];
  map<int,int> m1;
  map<int,int> m2;
 
  for(int i=0;i<n;++i){
   bp[i]=b[va[i].second];
   m1[(bp[i])]++;
   ans1+=distance(m1.find(bp[i]),m1.end());
   
   
   ap[i]=a[vb[i].second];
   m1[(ap[i])]++;
   ans1+=distance(m1.find(bp[i]),m1.end());
   
  }
  if(ans1<ans2){
   for(int i=0;i<n;++i){
    cout<<va[i].first<<' ';
   }
   cout<<'\n';
   for(int i=0;i<n;++i){
    cout<<bp[i]<<' ';
   }
   cout<<'\n';
  }
  else{
   for(int i=0;i<n;++i){
    cout<<ap[i]<<' ';
   }
   cout<<'\n';
   for(int i=0;i<n;++i){
    cout<<vb[i].first<<' ';
   }
   cout<<'\n';
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