#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
 
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
  FAST;
 int t;cin>>t;
 
 while(t--){
  char ans,c;
  
  for(int i=0;i<3;++i){
   bool findi=false;
   set<char> s;
   for(int j=0;j<3;++j){
    cin>>c;
    if(c=='?')
     findi=true;
    else
     s.insert(c);
   }
   if(findi){
    if(s.find('A')==s.end())
     ans='A';
    else
     if(s.find('B')==s.end())
      ans='B';
     else
      ans='C';
   }
  }
  cout<<ans<<endl;
  
  
 }
    return 0;
}