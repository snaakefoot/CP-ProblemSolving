  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
vector<ll> v;
void solve() {
 ll l,r;cin>>l>>r;
 auto it=upper_bound(v.begin(),v.end(),r-l);
 cout<<distance(v.begin(),it)<<endl;
 
 
 
}
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 int t;cin>>t;
 int s=0;
 while((s*(s+1))/2ll<=1e9){
  v.push_back((s*(s+1))/2ll);
  ++s;
 }
 while(t--){
  solve();
 }
 
    return 0;
}