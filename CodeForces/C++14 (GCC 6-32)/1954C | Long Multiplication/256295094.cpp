#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;
const int Nmax=1e3+1;
int dp[Nmax][4];
int inf=1e9;
struct ComparePairs {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
 
        if (a.first != b.first) {
            return a.first > b.first; 
        }
 
        return a.second > b.second; 
    }
};
 
void solve() {
 
 
 string a,b;cin>>a>>b;
 int n=a.length();
 bool done=false;
 for(int i=0;i<n;++i){
  if(a[i]!=b[i]){
   if(done && a[i]>b[i]){
    swap(a[i],b[i]);
   }
   if(!done ){
    if(a[i]<b[i])
    swap(a[i],b[i]);
    done=true;
   }
  }
 }
 cout<<a<<'\n'<<b<<endl;
 
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