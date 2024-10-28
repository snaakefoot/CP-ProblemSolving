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
  ll n,k;cin>>n>>k;
  ll l=0,r=n,ans=-1,s1,s2,mid;
  while(l<=r){
   mid=(l+r)/2ll;
   s1=(mid*(mid-1))/2ll;
   s2=(n*(n-1))/2ll-s1;
   s1+=mid*k;
   s2+=(n-mid)*k;
   if(s1>=s2){
    ans=mid;
    r=mid-1;
   }
   else
    l=mid+1;
  }
     s1=(ans*(ans-1))/2ll;
   s2=(n*(n-1))/2ll-s1;
   s1+=ans*k;
   s2+=(n-ans)*k;
 
   ll best=s1-s2;
   --ans;
        s1=(ans*(ans-1))/2ll;
   s2=(n*(n-1))/2ll-s1;
   s1+=ans*k;
   s2+=(n-ans)*k;
  cout<<min(best,s2-s1)<<endl;
 }
 
    return 0;
}