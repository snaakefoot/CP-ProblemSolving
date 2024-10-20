#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;


void solve() {
		int n,k;cin>>n>>k;
		bool test=true;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		sort(a,a+n);
		int best =1e9+2;
		for(int i=0;i<=k;++i){
			best=min(a[n-1-(k-i)]-a[i],best);
		}
		cout<<best<<endl;
	
 
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