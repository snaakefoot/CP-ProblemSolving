#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
void solve() {
 int n,x;cin>>n;
 int a[n];
 map<int,int> m1;
 for(int i=0;i<n;++i){
  cin>>a[i];
  x=a[i];
  while (x % 2 == 0)
  {
   m1[2]++;
   x = x/2;
  }
 
  for (int i = 3; i*i <= x; i = i + 2)
  {
   while (x % i == 0)
   {
      m1[i]++;
    x = x/i;
   }
  }
  if (x>2)
   m1[x]++;
 }
 bool test=true;
 for(auto u:m1){
  if((u.second)%n!=0)
   test=false;
 }
 if(test)
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;
 
 
 
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