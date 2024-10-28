#include<bits/stdc++.h>
#include <climits>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
 
void solve() {
  int n,k;cin>>n;
  string ch;cin>>ch;
  int i=0,nb1=0,nb0=0;
  while(i<n){
   if(ch[i]=='1'){
    ++nb1;
    ++i;
   }
   else{
    nb0++;
    while(i<n && ch[i]=='0')
     ++i;
   }
   
  }
  if(nb1>nb0)
   cout<<"Yes"<<endl;
  else
   cout<<"No"<<endl;
  
  
  
 
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