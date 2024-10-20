#include <bits/stdc++.h>
#define ll long long
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
const ll mod=1e9 +7;
const ll mxint=1e6+1;


void solve() {
	int n,x;cin>>n;
	vector<int> a[n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>x;
			if(x)
				a[i].push_back(j+1);
		}
	}
	for(int i=0;i<n;++i){
		for(int u:a[i])
			cout<<u<<' ';
		cout<<endl;
	}
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
