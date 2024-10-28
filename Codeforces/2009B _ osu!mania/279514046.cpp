  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;
long long power(long long x, long long y, long long m = mod) {
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
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 
 while(t--){
  int n;cin>>n;
  char a[n][4];
  for(int i=0;i<n;++i)
   for(int j=0;j<4;++j)
    cin>>a[i][j];
  for(int i=n-1;i>=0;--i){
   for(int j=0;j<4;++j)
    if(a[i][j]=='#'){
     cout<<j+1<<' ';
    }
  }
  cout<<endl;
 }
 
    return 0;
}