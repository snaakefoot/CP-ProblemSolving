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
  int n,k;cin>>n>>k;
  for(int i=0;i<k;++i)
   cout<<i+1<<' ';
  for(int i=n;i>k;--i)
   cout<<i<<' ';
  cout<<endl;
  
 }
    return 0;
}