
#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=998244353;


void solve() {
	int n;cin>>n;
	int p[n];
	int spoons[n];
	for(int i=0;i<n;++i){
		cin>>p[i];
		p[i]--;
		spoons[i]=1;
	}
	string ch;cin>>ch;
	ll ans=0,x;
	if(ch[p[0]]=='?' || ch[p[0]]=='L'){
		spoons[p[0]]=0;
		x=1;
		for(int i=1;i<n;++i){
			if(spoons[p[i]]==1 && spoons[(p[i]+1)%n]==1 && ch[p[i]]=='R'){
				x*=0;
				break;
			}
			if(spoons[p[i]]==1 && spoons[(p[i]+1)%n]==0 && ch[p[i]]=='?'){
				x*=2;
				x%=mod;
			}
			spoons[p[i]]=0;
		}
		ans+=x;
	}
	for(int i=0;i<n;++i){
		spoons[i]=1;
	}
	if(ch[p[0]]=='?' || ch[p[0]]=='R'){
		spoons[(p[0]+1)%n]=0;
		x=1;
		for(int i=1;i<n;++i){
			if(spoons[p[i]]==1 && spoons[(p[i]+1)%n]==1 && ch[p[i]]=='L'){
				x*=0;
				break;
			}
			if(spoons[p[i]]==0 && spoons[(p[i]+1)%n]==1 && ch[p[i]]=='?'){
				x*=2;
				x%=mod;
			}
			spoons[(p[i]+1)%n]=0;
		}
		ans+=x;
		ans%=mod;
	}
	cout<<ans<<endl;
	
}


int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	FAST;
	solve();
	
    return 0;
}
