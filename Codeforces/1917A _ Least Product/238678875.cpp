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
  int nbn=0;
  bool zero=false;
  int a[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   if(a[i]==0)
    zero=true;
   if(a[i]<0)
    nbn++;
  }
  if(nbn%2==1){
   cout<<0<<endl;
  }
  else{
   if(zero)
    cout<<0<<endl;
   else{
    cout<<1<<endl;
    cout<<1<<' '<<0<<endl;
   }
  }
  
 }
    return 0;
}