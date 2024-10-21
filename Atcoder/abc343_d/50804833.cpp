#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e6+1;


void solve() {
	int n,t;cin>>n>>t;
	ll scr[n];
	for(int i=0;i<n;++i)
		scr[i]=0;
	map<ll,int> m;
	m[0]=n;
	ll ans=1;
	int a,b;
	for(int i=0;i<t;++i){
		cin>>a>>b;
		m[scr[a-1]]--;
		if(m[scr[a-1]]==0)
			--ans;
		scr[a-1]+=b;
		if(m[scr[a-1]]==0)
			++ans;
		m[scr[a-1]]++;
		cout<<ans<<endl;
	}
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
