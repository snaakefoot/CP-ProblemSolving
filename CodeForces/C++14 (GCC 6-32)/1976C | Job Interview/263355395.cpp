#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;
 
 
void solve() {
  ll n,m,sz,x=-1,ng,mg,nbp,nbt;cin>>n>>m;
  sz=m+n+1;
     ll a[sz];
  ll b[sz];
  ll suffp[sz];
  ll sufft[sz];
  ll best[sz];
  for(int j=0;j<sz;++j){
   cin>>a[j];
  }
  vector<pair<int,int> > v; 
  for(int j=0;j<sz;++j){
   cin>>b[j];
   if(j)
    best[j]=best[j-1]+max(a[j],b[j]);
   else
    best[j]=max(a[j],b[j]);
   nbp=0;
   nbt=0;
   if(j){
    nbp=v[j-1].first;
    nbt=v[j-1].second;
   }
   if(a[j]>b[j]){
    nbp++;
   }
   else
    nbt++;
   v.push_back(make_pair(nbp,nbt));
  }
  suffp[sz-1]=a[sz-1];
  sufft[sz-1]=b[sz-1];
 
  for(int i=sz-2;i>=0;--i){
   suffp[i]=suffp[i+1]+a[i];
   sufft[i]=sufft[i+1]+b[i];
  }
  for(int i=0;i<sz;++i){
   ng=n;mg=m;
   ll l=0,r=sz-1,mid,ians=-1,ans;
   while(l<=r){
    mid=(l+r)/2;
    if(v[mid].first<=ng+((a[i]>b[i]&& mid>=i)) && v[mid].second<=mg+((a[i]<b[i]&& mid>=i))){
     ians=mid;
     l=mid+1;
    }
    else{
     
    
     r=mid-1;
    }
   }
   
   if(ians!=-1)
   ans=best[ians];
   else
    ans=0;
   if(ians<sz-1){
    if(ians>=i){
     if(v[ians+1].first>ng+(a[i]>b[i])){
      ans+=sufft[ians+1]-max(b[i],a[i]);
     }
     else
      ans+=suffp[ians+1]-max(b[i],a[i]);
    }
    else{
     if(v[ians+1].first>ng){
      ans+=sufft[ians+1]-b[i];
     }
     else
      ans+=suffp[ians+1]-a[i];
    }
 
   }
   else{
    ans-=max(b[i],a[i]);
   }
   cout<<ans<<' ';
  }
  cout<<endl;
  
  
  
  
 
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