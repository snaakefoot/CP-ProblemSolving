#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = unsigned long long;
const ll mod=998244353;
const int MAXN=2*1e5+1;


void solve() {
		ll n;cin>>n;
		vector<ll> a(n);
		ll freq[11]={0};
		ll ans=0ll,pot,x,cnt;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		
		ll suff[n];
		suff[n-1]=a[n-1];
		for(int i=n-2;i>=0;--i){
			suff[i]=suff[i+1]+a[i];
		}
		x=a[n-1];
			cnt=0;

			while(x){
				x/=10ll;
				++cnt;
			}
			freq[cnt]++;

		for(int i=n-2;i>=0;--i){
			ans+=suff[i+1];
			ans%=mod;
			pot=1;

			for(int j=0;j<11;++j){
				ans+=(((pot*freq[j])%mod)*a[i])%mod;

				pot*=10ll;
				pot%=mod;
				ans%=mod;
			}
			x=a[i];
			cnt=0ll;

			while(x){
				x/=10ll;
				++cnt;
			}
			freq[cnt]++;
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