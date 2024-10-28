#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 ll n,k,p1,p2;cin>>n>>k>>p1>>p2;
 
 ll p[n];
 ll a[n];
 bool been[n];
 for (int i=0;i<n;++i){
  cin>>p[i];
 }
 for (int i=0;i<n;++i){
  cin>>a[i];
  been[i]=false;
 }
 p1--;p2--;
 been[p1]=true;
 ll best1=a[p1]*k,k1=k-1,prev;prev=a[p1];p1=p[p1]-1;
 
 while(k1 && !been[p1]){
  best1=max(best1,prev+k1*a[p1]);
  been[p1]=true;
  prev+=a[p1];
  p1=p[p1]-1;
  --k1;
 }
 for (int i=0;i<n;++i){
  been[i]=0;
 }
 been[p2]=true;
 ll best2=a[p2]*k,k2;prev=a[p2];p2=p[p2]-1;k2=k-1;
 
 while(k2 && !been[p2]){
 
  best2=max(best2,prev+k2*a[p2]);
  been[p2]=true;
  prev+=a[p2];
  p2=p[p2]-1;
  --k2;
  
 }
 if(best1>best2)
  cout<<"Bodya"<<endl;
 else
  if(best2>best1)
   cout<<"Sasha"<<endl;
  else
   cout<<"Draw"<<endl;
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