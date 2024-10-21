#include<bits/stdc++.h>

using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
void solve() {
	
	ll n,u,m;cin>>n>>m;
	ll s;
	ll a[n];
	vector<pair<int,int>> v;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	ll l=0,r=1e9+1,mid,ans=0;
	while(l<=r){
		s=0;
		mid=(l+r)/2;
		for(int i=0;i<n;++i)
			s+=min(a[i],mid);
		if(s<=m){
			l=mid+1;
			ans=mid;
		}
		else
			r=mid-1;
	}
	if(ans!=(1e9+1))
		cout<<ans<<endl;
	else
		cout<<"infinite"<<endl;
	
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