#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;

		
void solve() {
		int n;cin>>n;
		ll a[n];
		ll b[n];
		ll s=0,ans=0;
		for(int i=0;i<n;++i){
			cin>>a[i]>>b[i];
			s+=a[i];
		}
		for(int i=0;i<n;++i){
			ans=max(ans,s-a[i]+b[i]);
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