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
  int n;
  cin>>n;
  int a[n];
  map<ll,int> m;
  ll pref0[n+1];
  ll pref1[n+1];
  pref0[0]=0;
  bool test=false;
  pref1[0]=0;
  m[0]++;
  for(int i=0;i<n;++i){
   cin>>a[i];
   if(i%2){
    pref1[i+1]=a[i]+pref1[i];
    pref0[i+1]=pref0[i];
   }
   else{
    pref0[i+1]=a[i]+pref0[i];
    pref1[i+1]=pref1[i];
   }
   
   m[pref1[i+1]-pref0[i+1]]++;
   if(m[pref1[i+1]-pref0[i+1]]>1)
    test=true;
  }
  if(test)
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
  
  
  
 }
    return 0;
}