#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;
const int Nmax=1e3+1;
int dp[Nmax][4];
int inf=1e9;
struct ComparePairs {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
 
        if (a.first != b.first) {
            return a.first > b.first; 
        }
 
        return a.second > b.second; 
    }
};
 
void solve() {
 
 
 int n,k;cin>>n>>k;
 --k;
 int a[n];
 bool test=false;
 for(int i=0;i<n;++i){
  cin>>a[i];
 }
 int p0=-1,p1=-1;
 for(int i=0;i<n;++i){
  if(a[i]>a[k] ){
   if(p0==-1)
    p0=i;
   else{
    p1=i;
    break;
   }
  }
 }
 if(p0==-1)
  cout<<n-1<<endl;
 else{
   if(p1!=-1){
    if(k>p1)
     cout<<max(p0-1,p1-p0-(p0==0))<<endl;
    else
     if(k>p0)
      cout<<max(p0-1,k-p0-(p0==0))<<endl;
     else
      cout<<max(p0-1,0)<<endl;
    }
   else{
    if(p0>k)
     cout<<p0-1<<endl;
    else
     
     cout<<max(p0-1,k-p0-(p0==0))<<endl;
   }
  }
  
 
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