#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e8+7;
const int MAXN=1e6;
 
void solve() {
 ll k;cin>>k;
 ll l=1,r=1e9,mid,last,ans,last2;
 while(l<=r){
  mid=l+(r-l)/2ll;
  if(mid*mid>k)
   r=mid-1;
  else{
   last=mid;
   l=mid+1;
  }
 }
 ans=k+last;
 l=1,r=1e9;
 while(l<=r){
  mid=l+(r-l)/2ll;
  if(mid*mid>ans)
   r=mid-1;
  else{
   last2=mid;
   l=mid+1;
  }
 }
 if(last2!=last)
  ++ans;
 cout<<ans<<endl;
 
 
}
 
int main(){
 //freopen("walk_the_line_input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 
 FAST;
 int t,cnt=1;cin>>t;
 while(t--){
  //cout<<"Case #"<<cnt<<": "; 
  //++cnt;
  solve();
  
 }
 
    return 0;
}