#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;


void solve() {
		int n;cin>>n;
		string a[n];
		string ch;
		ll szmx=1;
		for(int i=0;i<n;++i){
			cin>>ch;
			a[i]=ch;
			if(szmx<ch.size() )
				szmx=ch.size();
		}
		int p1=31;
		int p2=37;
		map<pair<pair<ll,ll>,int>,ll >ma; 
		vector<long long> p1_pow(szmx);
		vector<long long> p2_pow(szmx);
		vector<long long> h1[n];
		vector<long long> h2[n];
		p1_pow[0] = 1;	
		p2_pow[0] = 1;
		for (int i = 1; i < szmx; i++){
				p1_pow[i] = (p1_pow[i-1] * p1) % mod;
				p2_pow[i] = (p2_pow[i-1] * p2) % mod;
		}

		for(int j=0;j<n;++j){
			ch=a[j];
			h1[j].push_back(0);
			h2[j].push_back(0);
			for (int i = 0; i < ch.size(); i++){
				h1[j].push_back( (h1[j][i] + (ch[i] - 'a' + 1) * p1_pow[i]) % mod);
				h2[j].push_back( (h2[j][i] + (ch[i] - 'a' + 1) * p2_pow[i]) % mod);
			}
		}
			
		for(int i=1;i<=a[n-1].size();++i){
			ma[make_pair(make_pair(h1[n-1][i],h2[n-1][i]),i)]++;
		}
		ll ans=0,old;
		for(int j=n-2;j>=0;--j){
			old=0;
			for(ll i=1;i<=a[j].size();++i){
				ans+=ma[make_pair(make_pair(h1[j][i],h2[j][i]),i)];
				
	
				ma[make_pair(make_pair(h1[j][i],h2[j][i]),i)]++;
			}
	
		}
		cout<<ans<<endl;


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