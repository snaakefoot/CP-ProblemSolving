#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e6+1;


void solve() {
	ll n,x,sz;cin>>n;
	ll mx=1;
	for(ll i=1;i*i*i<=n;++i){
		bool test=true;
		x=i*i*i;
		sz=0;
		vector<int> v;
		while(x){
			v.push_back(x%10ll);
			
			x/=10ll;
			sz++;
			
		}
		
		for(int j=0;j<sz/2;++j)
			if(v[j]!=v[sz-1-j])
				test=false;
		if(test)
			mx=i*i*i;
	}
	cout<<mx<<endl;
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
