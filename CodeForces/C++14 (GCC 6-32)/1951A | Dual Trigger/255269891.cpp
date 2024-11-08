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
 
 
 int n,nb=0,cons=0,consmx=0;cin>>n;
 
 char a[n];
 bool test=false;
 for(int i=0;i<n;++i){
  
  cin>>a[i];
  if(a[i]=='1'){
   ++nb;
   ++cons;
  }
  else{
   cons=0;
  }
  consmx=max(consmx,cons);
 }
 if(nb%2==0 &&(consmx!=2 || nb!=2))
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