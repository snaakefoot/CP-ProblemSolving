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
  ll n;cin>>n;
  ll pref[n];
  int a[n];
  int nb[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   if(i){
    pref[i]=a[i]+pref[i-1];
   
     nb[i]=(a[i]%2==1)+nb[i-1];
   }
   else{
    pref[i]=a[i];
    nb[i]=(a[i]%2==1);
   }
  }
  cout<<a[0]<<' ';
  for(int i=1;i<n;++i){
   cout<<pref[i]-(nb[i]/3+(nb[i]%3==1))<<' ';
  
  }
  cout<<endl;
 
 }
    return 0;
}