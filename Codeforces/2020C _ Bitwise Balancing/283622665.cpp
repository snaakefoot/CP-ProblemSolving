#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e8+7;
const int MAXN=1e6;
 
void solve() {
 ll a,b,c,d,e,f,b1,c1,d1,cnt=1;cin>>b>>c>>d;
 b1=b;
 c1=c;
 d1=d;
 bool test=true;
 a=0;
 while(d || c || b){
  if( (d&1) !=(b&1) ){
   a+=cnt;
   
  }
  
  c>>=1;
  d>>=1;
  b>>=1;
  cnt*=2ll;
 
 }
 
 if((a|b1) -(a&c1) == d1)
 cout<<a<<endl;
 else
  cout<<-1<<endl;
 
 
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