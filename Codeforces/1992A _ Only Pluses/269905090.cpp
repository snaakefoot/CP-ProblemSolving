#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
  int a,b,c;
  cin>>a>>b>>c;
  int x=5;
  while(x){
   
   vector<int> v;
   v.push_back(a);
   v.push_back(b);
   v.push_back(c);
   sort(v.begin(),v.end());
   v[0]++;
   a=v[0];
   b=v[1];
   c=v[2];
  
   --x;
  }
  cout<<a*b*c<<endl;
 
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