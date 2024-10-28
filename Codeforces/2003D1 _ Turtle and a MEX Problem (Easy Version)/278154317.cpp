  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
 ll n,m;cin>>n>>m;
 set<int> a[n];
 ll mx=-1,l,x;
 for(int i=0;i<n;++i){
  cin>>l;
  while(l--){
   cin>>x;
   a[i].insert(x);
  }
  ll prev=-1,best;
  auto it=a[i].begin();
  bool test=true;
  while(it!=a[i].end()){
   
   if((*(it))!=prev+1){
    if((*(it))==prev+2 && test){
     prev=prev+2;
     test=false;
    }
    else {
     if(test)
     best=prev+2;
     else
      best=prev+1;
     
     break;
    }
   }
   prev=*(it);
   ++it;
  }
  if(it==a[i].end()){
   best=prev+1;
   if(test)
    ++best;
  }
  mx=max(mx,best);
  
 }
 ll ans=mx*min(m+1,(mx+1));
 if(m>mx){
  
  ans+=(m*(m+1))/2ll;
  ans-=(mx*(mx+1))/2ll;
 }
 cout<<ans<<endl;
 
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
cout.flush();
 int t;cin>>t;
 cout.flush();
 while(t--){
  solve();
 }
 
    return 0;
}