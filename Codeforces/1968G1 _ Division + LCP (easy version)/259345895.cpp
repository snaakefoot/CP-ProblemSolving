#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
 
  
void solve() {
  
 int n,k,q;cin>>n>>k>>q;
 string ch;cin>>ch;
 int l=1,r=n/k,mid,cnt,ans=-1;
 int p1=31;
 int p2=37;
 
 vector<long long> p1_pow(n);
 vector<long long> p2_pow(n);
 vector<long long> h1(n+1,0);
 vector<long long> h2(n+1,0);
 p1_pow[0] = 1;
 p2_pow[0] = 1;
 for (int i = 0; i < n; i++){
   if(i){
   p1_pow[i] = (p1_pow[i-1] * p1) % mod;
   p2_pow[i] = (p2_pow[i-1] * p2) % mod;
   }
   h1[i+1] = (h1[i] + (ch[i] - 'a' + 1) * p1_pow[i]) % mod;
   h2[i+1] = (h2[i] + (ch[i] - 'a' + 1) * p2_pow[i]) % mod;
  }
 while(l<=r){
  mid=(l+r)/2;
  int i=0;
  cnt=1;
 
  ll cur_h1=h1[mid],cur2_h1,cur2_h2,cur_h2=h2[mid];
  cur_h1 = (cur_h1 * p1_pow[n-i-1]) % mod;
  cur_h2 = (cur_h2 * p2_pow[n-i-1]) % mod;
  i=mid;
  while(i+mid<=n){
   cur2_h1=(h1[i + mid] + mod - h1[i])%mod;
   cur2_h1 = (cur2_h1 * p1_pow[n-i-1]) % mod;
   cur2_h2=(h2[i + mid] + mod - h2[i])%mod;
   cur2_h2 = (cur2_h2 * p2_pow[n-i-1]) % mod;
   if(cur2_h1==cur_h1 &&  cur2_h2==cur_h2){
    ++cnt;
    i+=mid;
   }
   else
    ++i;
  }
 
  if(cnt>=k){
   l=mid+1;
   ans=mid;
   
  }
  else
   r=mid-1;
 }
 if(ans>0)
 cout<<ans<<endl;
 else
  cout<<0<<endl;
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