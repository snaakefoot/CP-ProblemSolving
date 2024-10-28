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
 
 
 int n;cin>>n;
 int a[n];
 set<int> s;
 for(int i=0;i<n;++i){
  cin>>a[i];
  s.insert(a[i]);
 }
 if(s.size()==1){
  cout<<-1<<endl;
  return ;
 }
 if(a[0]!=a[n-1]){
  cout<<0<<endl;
  return ;
 }
 int olddiff=-1;
 int mn=1e9;
 for(int i=1;i<n;++i){
  if(a[i]!=a[0]){
   mn=min(mn,i-olddiff-1);
   olddiff=i;
  }
 }
 mn=min(mn,n-olddiff-1);
 cout<<mn<<endl;
 
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