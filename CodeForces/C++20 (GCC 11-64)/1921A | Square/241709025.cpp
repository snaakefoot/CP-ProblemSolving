#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e18;
 
 
int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 FAST;
 int t;cin>>t;
 while(t--){
  int n=4,x11,x22,y11,y22;
  int x[n];
  int y[n];
  set<int> x1;
  set<int> y1;
  for(int i=0;i<n;++i){
   cin>>x[i]>>y[i];
   x1.insert(x[i]);
   y1.insert(y[i]);
  }  
  auto it =x1.begin();
  x11=*it;
  ++it;
  x22=*it;
  it =y1.begin();
  y11=*it;
  ++it;
  y22=*it;
  cout<<abs(x11-x22)*abs(y11-y22)<<endl;
 }
    return 0;
}