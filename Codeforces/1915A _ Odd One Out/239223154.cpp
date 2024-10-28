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
  int a,b,c;cin>>a>>b>>c;
  map<int,int> m;
  m[a]++;
  m[b]++;
  m[c]++;
  if(m[a]==1)
   cout<<a<<endl;
  else
   if(m[b]==1)
    cout<<b<<endl;
   else
    cout<<c<<endl;
  
  
 }
    return 0;
}