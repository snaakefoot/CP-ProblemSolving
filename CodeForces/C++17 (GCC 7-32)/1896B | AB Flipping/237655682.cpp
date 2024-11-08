#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const int Nmax=1e6+1;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 while(t--){
  
  int n;cin>>n;
  char ch[n];
  for(int i=0;i<n;++i){
   cin>>ch[i];
  }
  int i=0;
  while(i<n && ch[i]=='B')
   ++i;
  int ans=0,sa,sb;
  while(i<n){
   sa=0;sb=0;
   while(i<n && ch[i]=='A'){
    sa++;
    ++i;
   }
   while(i<n && ch[i]=='B'){
    sb++;
    ++i;
   }
   if(ans)
    ++sa;
   if(sb!=0){
    ans+=sa+sb-1;
   }
   
  }
  cout<<ans<<endl;
 }
    return 0;
}