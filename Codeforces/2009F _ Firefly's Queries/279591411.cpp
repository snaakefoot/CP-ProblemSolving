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
  ll n,q,s=0;cin>>n>>q;
  ll a[n];
  ll pref[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
   s+=a[i];
   if(i)
    pref[i]=a[i]+pref[i-1];
   else
    pref[i]=a[i];
  }
  while(q--){
   ll l,r;
   cin>>l>>r;
   --l;
   ll nb=(r/n),s1=nb*s,x;
   if(r%(n)){
    x=r%(n);
    --x;
    if(x+nb>=n){
     s1+=(pref[x+nb-n]);
    }
    s1+=pref[min(n-1,x+nb)];
    if(nb)
    s1-=pref[nb-1];
   }
    nb=(l/(n));
   ll s2=nb*s;
  
   if(l%(n)){
    x=l%(n);
    --x;
    if(x+nb>=n){
     s2+=(pref[x+nb-n]);
    }
    s2+=pref[min(n-1,x+nb)];
     if(nb)
    s2-=pref[nb-1];
   }
   cout<<s1-s2<<endl;
   
  }
 }
 
    return 0;
}