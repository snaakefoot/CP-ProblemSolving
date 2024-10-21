#include<bits/stdc++.h>

using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
void solve() {
	
	int n,u;cin>>n;
	string ch;
	cin>>ch;
	ll inf=-1*1e15;
	ll dp[n+1][3];
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	map<char,int> m;
	m['R']=0;
	m['P']=1;
	m['S']=2;
	for(int i=1;i<=n;++i){
		dp[i][(m[ch[i-1]]+2)%3]=inf;
		dp[i][m[ch[i-1]]]=max(dp[i-1][(m[ch[i-1]]+2)%3],dp[i-1][(m[ch[i-1]]+1)%3]);
		dp[i][(m[ch[i-1]]+1)%3]=1+max(dp[i-1][m[ch[i-1]]],dp[i-1][(m[ch[i-1]]+2)%3]);
	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<endl;
	
	
}
 
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
 
	FAST;
	int t=1;
	while(t--){
		solve();
		
	}
	
    return 0;
}