#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 int n,m;
 cin>>n>>m;
 string ch1,ch2;cin>>ch1>>ch2;
 int nb0=0,nb1=0;
 
 int i1=0,i2=0;
 while(i1<n && i2<m){
  if(ch1[i1]==ch2[i2]){
   ++i1;
   ++i2;
  }
  else{
   while(i2<m && ch2[i2]!=ch1[i1])
    ++i2;
   
 
  }
 }
 cout<<i1<<endl;
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