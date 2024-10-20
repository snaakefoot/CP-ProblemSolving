#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;


void solve() {
		int n;cin>>n;
		ll pot=2,ans=1;
		while(pot-1<=n){
			pot<<=1;
			++ans;
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