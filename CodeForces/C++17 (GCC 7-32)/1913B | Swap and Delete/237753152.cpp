#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmax=1e6+1;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  
  string ch;cin>>ch;
  int n=ch.length();
  int sum0[n+1];
  int sum1[n+1];
  sum1[0]=0;
  sum0[0]=0;
  for(int i=1;i<=n;++i){
   sum1[i]=(ch[i-1]=='1')+sum1[i-1];
   sum0[i]=(ch[i-1]=='0')+sum0[i-1];
  }
  int mn=n+2,tot0=sum0[n],tot1=sum1[n];
  for(int i=n;i>=0;--i){
   if(sum0[i]<=tot1 && sum1[i]<=tot0){
    mn=n-i;
    break;
   }
  }
  cout<<mn<<endl;
 }
    return 0;
}