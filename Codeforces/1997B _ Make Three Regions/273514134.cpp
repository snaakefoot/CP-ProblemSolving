#include<bits/stdc++.h>
 
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;
 
 
void solve() {
 
 int n;cin>>n;
 string ch1,ch2;
 cin>>ch1>>ch2;
 int ans=0;
 for(int i=1;i<n-1;++i)
  if(ch1[i]=='.' && ch1[i-1]=='.' && ch1[i+1]=='.' && ch2[i]=='.' && ch2[i+1]=='x' && ch2[i-1]=='x' )
   ++ans;
 for(int i=1;i<n-1;++i)
  if(ch2[i]=='.' && ch2[i-1]=='.' && ch2[i+1]=='.' && ch1[i]=='.' && ch1[i+1]=='x' && ch1[i-1]=='x' )
   ++ans;
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