#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
long long power(long long x, long long y, long long m = 1e18) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}
bool isprime(int x){
 for(int i=2;i*i<=x;++i)
  if(x%i==0)
   return false;
 return true;
}
 
void solve() {
  int n,m;cin>>n>>m;
  char a[n][m];
  char b[n][m];
  int col[m];
  int lgn[n];
  bool test=true;
  for(int i=0;i<n;++i)
   for(int j=0;j<m;++j)
    cin>>a[i][j];
  for(int i=0;i<n;++i){
   lgn[i]=0;
   for(int j=0;j<m;++j){
    cin>>b[i][j];
    lgn[i]+=(3+a[i][j]-b[i][j])%3;
   }
  if(lgn[i]%3!=0)
    test=false;
  }
  int nb1=0,nb2=0;
  for(int i=0;i<m;++i){
   col[i]=0;
   for(int j=0;j<n;++j){
    col[i]+=(3+a[j][i]-b[j][i])%3;
    if((3+a[j][i]-b[j][i])%3==1)
     nb1++;
    else if((3+a[j][i]-b[j][i])%3==2)
     nb2++;
   }
   if(col[i]%3!=0)
    test=false;
  }
  if(test)
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