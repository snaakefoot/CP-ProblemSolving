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
  int x,y,k;cin>>x>>y>>k;
  int a1=(x+k-1)/k,a2=(y+k-1)/k;
  if(a1==a2)
   cout<<2*a1<<endl;
  else
   if(a1>a2)
    cout<<2*(a1-1)+1<<endl;
   else
    cout<<2*a2<<endl;
  
 }
 
    return 0;
}