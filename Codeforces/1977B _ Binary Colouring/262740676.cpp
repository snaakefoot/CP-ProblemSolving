#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  int x;cin>>x;
  
  vector<int> v;
  while(x){
   v.push_back((x&1));
 
   x>>=1;
  }
 
  int i=0;
  while(i<v.size() && !v[i])
   ++i;
  while(i<v.size()-1){
   if(v[i+1]==1){
    v[i]=-1;
 
    ++i;
    while(i<v.size() && v[i]){
     v[i]=0;
     ++i;
    }
    if(i<v.size()){
     v[i]=1;
    }
    else{
     v.push_back(1);
    }
   }
   else{
    ++i;
   while(i<v.size() && v[i]==0)
    ++i;
  
   }
  }
  cout<<v.size()<<endl;
  for(auto u:v)
   cout<<u<<' ';
  cout<<endl;
 
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