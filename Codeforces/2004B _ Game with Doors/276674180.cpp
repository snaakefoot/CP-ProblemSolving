#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int l1,r1,l2,r2,ans=0;cin>>l1>>r1>>l2>>r2;
 
 int color[102]={0};
 for(int i=0;i<=100;++i){
  if(i>=l1 && i<=r1)
   color[i]+=1;
  if(i>=l2 && i<=r2)
   color[i]+=2;
 
 }
 bool first=true;
 for(int i=0;i<=100;++i){
  
  if((color[i] && color[i+1] && (color[i+1]!=color[i] || color[i]==3|| color[i+1]==3 ) ))
   ++ans;
  if(!color[i] && color[i+1] && !first)
   ++ans;
  if(color[i+1])
   first=false;
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