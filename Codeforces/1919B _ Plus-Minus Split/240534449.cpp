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
  ll n,ans=0;cin>>n;
  char a[n];
  int pref[n+1];
  int pref1[n];
  int pref0[n];
  pref[0]=0;
  for(int i=0;i<n;++i){
   cin>>a[i];
   if(i){
    pref1[i]=pref1[i-1]+(a[i]=='+');
    pref0[i]=pref0[i-1]+(a[i]=='-');
    pref[i+1]=pref0[i]-pref1[i];
   }
   else{
    pref1[i]=(a[i]=='+');
    pref0[i]=(a[i]=='-');
    pref[i+1]=pref0[i]-pref1[i];
   }
  }
  
  int i=n,j,x;
  while(i>0){
   x=pref[i];
   j=i;
   --i;
   while(i>=0 && pref[i]!=x){
    --i;
   }
   if(i<0)
    ans+=j-i;
   
  }
  cout<<abs(pref[n])<<endl;
 
 }
    return 0;
}