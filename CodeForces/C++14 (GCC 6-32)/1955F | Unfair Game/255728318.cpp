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
 
 
 int p[4];
 int ans=0;
 cin>>p[0];
 cin>>p[1];cin>>p[2];cin>>p[3];
 if(p[0]%2==1 &&p[1]%2==1 && p[2]%2==1 )
  ++ans;
 ans+=p[0]/2+p[1]/2+p[2]/2+p[3]/2;
 cout<<ans<<endl;
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