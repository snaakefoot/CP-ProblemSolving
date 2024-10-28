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
  int a[n];
  for(int i=0;i<n;++i){
   cin>>a[i];
  }
  if(a[0]==1)
   cout<<"YES"<<endl;
  else
   cout<<"NO"<<endl;
 }
    return 0;
}