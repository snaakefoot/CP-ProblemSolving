#include<bits/stdc++.h>
//#pragma comment(linker, "/STACK:1073741824")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e8+7;
const ll  MAXN=1<<16;
 
 
 
void solve() {
 string ch1,ch2;cin>>ch1>>ch2;
 int i=0,n1=ch1.length(),n2=ch2.length();
 while(i<min(n1,n2)){
  if(ch1[i]!=ch2[i])
   break;
  ++i;
 }
 
 cout<<min(n1-i+n2+1,n1+n2)<<endl;
 
 
 
 
 
}
 
int main(){
 //freopen("subsonic_subway_input.txt","r",stdin);
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