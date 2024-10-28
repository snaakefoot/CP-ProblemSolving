#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  ll x,res=0,y;cin>>x;
 
  while(x){
   y=(x%10-res+10)%10;
   if(y==9){
    cout<<"NO"<<endl;
    return;
   }
   x/=10;
   res=1;
  }
 
  if(y==0)
  cout<<"Yes"<<endl;
 else
  cout<<"NO"<<endl;
  
  
 
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