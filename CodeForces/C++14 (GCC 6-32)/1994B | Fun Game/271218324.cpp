#include<bits/stdc++.h>
#include <climits>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
 
void solve() {
  int n;cin>>n;
  string ch1,ch2;cin>>ch1>>ch2;
  bool done=false;
  for(int i=0;i<n;++i){
   if(ch1[i]=='1')
    done=true;
   if(ch1[i]!=ch2[i]){
    if(done)
     cout<<"Yes"<<endl;
    else
     cout<<"No"<<endl;
    return;
   }
  }
  cout<<"Yes"<<endl;
  
  
 
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