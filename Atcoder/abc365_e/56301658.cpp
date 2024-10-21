#include<bits/stdc++.h>

using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
void solve() {
	
	ll n,u;cin>>n;
	ll a[n];
	
	for(int i=0;i<n;++i)
		cin>>a[i];
	ll ans=0,pot,f0,f1,nb;
	for(int x=0;x<30;++x){
		pot=(1ll<<x);
		f0=1;f1=0,nb=0;
		for(int i=0;i<n;++i){
			if((a[i]&(1ll<<x))){
				++nb;
				if(nb%2==0){
					ans+=pot*max((f1-1),0ll);
				}
				else{
					ans+=pot*(f0-1);
				}
			}
			else{
				if(nb%2==0){
					ans+=pot*f1;
				}
				else{
					ans+=pot*f0;
				}
			}

			
			f0+=(nb%2==0);
			f1+=(nb%2);

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