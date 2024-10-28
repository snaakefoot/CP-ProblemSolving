#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
 
 
 
 
 
void solve() {
 int n;cin>>n;
 int t=0;
 map<char,int> m;
 string mi="CDHS";
 map<int,set<char> >  ans;
 m['C']=0;
 m['D']=1;
 m['H']=2;
 m['S']=3;
 char c,c1,c2;cin>>c;
 t=m[c];
 for(int i=0;i<2*n;++i){
  cin>>c1>>c2;
  ans[m[c2]].insert(c1);
 }
 map<int,int> rep;
 for(int i=0;i<4;i++)
  rep[i]=(ans[i]).size();
 int x=rep[t];
 for(int i=0;i<4;i++){
  if(i==t)
   continue;
  x-=(rep[i])%2;
 }
 vector<string> v;
 string ch;
 if(x>=0 && x%2==0){
  for(int i=0;i<4;++i){
   if(i!=t){
    if(rep[i]%2==1 ){
     ch="";
     ch.push_back(m[i]);
     ch.push_back(*(ans[i].begin()));
     cout<<(*(ans[i].begin()))<<mi[i]<<' '<<*(ans[t].begin())<<c<<endl;
     ans[t].erase(ans[t].begin());
     ans[i].erase(ans[i].begin());
    }
     int cnt=0;
     for(auto c3:ans[i]){
      cout<<c3<<mi[i]<<' ';
      ++cnt;
      if(cnt%2==0){
       cout<<endl;
      }
     }
    
   }
  }
  int cnt=0;
  for(auto c3:ans[t]){
      cout<<c3<<mi[t]<<' ';
      ++cnt;
      if(cnt%2==0){
       cout<<endl;
      }
     }
  
 }
 else
  cout<<"IMPOSSIBLE"<<endl;
 
 
 
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