#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;


void solve() {
		ll n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		ll suff[n];
		suff[n-1]=a[n-1];
		for(int i=n-2;i>=0;--i){
			suff[i]=suff[i+1]+a[i];
		}
		ll ans=0,x=1e8;
		for(ll i=0;i<n-1;++i){
			auto it=lower_bound(a.begin(),a.end(),x-a[i]);
			ans+=(n-1-i)*a[i];
			ans+=suff[i+1];
			if(distance(a.begin(),it)<=i){
				ans-=x*(n-1-i);
			}
			else{
				ans-=x*(n-distance(a.begin(),it));
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