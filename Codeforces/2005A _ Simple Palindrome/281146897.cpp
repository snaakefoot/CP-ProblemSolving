#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
 
void solve() {
 int n,k,ans=0;cin>>n;
 k=n/5;
 bool test=true;
 int a[n];
 string ch="aeiou";
 for(int i=0;i<5;++i){
  for(int j=0;j<k;++j)
   cout<<ch[i];
  if(i<n%5)
   cout<<ch[i];
 }
 cout<<endl;
 
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