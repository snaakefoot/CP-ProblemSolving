  #include<bits/stdc++.h>

using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;

void solve() {
	ll n,ans=0,cnt=0,k,done=0;cin>>n>>k;
	cnt=n;
	ll a[n];
	map<ll,ll> m;
	for(int i=0;i<n;++i){
		cin>>a[i];
		m[a[i]]++;
	}
	
	for(auto p:m){
		ans+=min(cnt*(p.first-done),k);
		
		k-=cnt*(p.first-done);
		done+=p.first-done;
		cnt-=p.second;
	
		if(k>0){
			ans+=p.second;
		}
		else
			break;
	}
	cout<<ans<<endl;
	
	
}
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int t;cin>>t;

	while(t--){
		solve();
	}
	
    return 0;
}