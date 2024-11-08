#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  int n,m;cin>>n>>m;
  int a[n];
  int b[n];
  a[0]=1;
  for(int i=1;i<n;++i){
   cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;++i){
   cin>>b[i];
  }
  sort(b,b+n);
  int i=0,opp=0;
  while(i+opp<n){
   if(a[i]>=b[i+opp]){
    opp++;
   }
   else
    ++i;
  }
  cout<<opp<<endl;
  
 }
    return 0;
}