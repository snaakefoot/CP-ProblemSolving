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
  int n;
  cin>>n;
  bool a[n+1][2];
  int x[n];
  int y[n];
  a[0][0]=0;
  a[0][1]=0;
  for(int i=0;i<n;++i){
   cin>>x[i]>>y[i];
   a[i+1][0]=0;
   a[i+1][1]=0;
  }
  for(int i=0;i<n;++i){ 
   a[x[i]][y[i]]=1;
  }
  ll ans=0;
  for(int i=0;i<=n;++i){
   if(a[i][0] && a[i][1])
    ans+=n-2;
   if(i && i<n && a[i][1] && a[i-1][0]&&a[i+1][0])
    ++ans;
   if(i && i<n &&a[i][0] && a[i-1][1]&&a[i+1][1])
    ++ans;
  }
  cout<<ans<<endl;
 }
 
    return 0;
}