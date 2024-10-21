#include<bits/stdc++.h>

using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
void solve() {
	
	int n,u;cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;++i){
		cin>>u;
		v.push_back(make_pair(u,i));
	}
	sort(v.begin(),v.end());
	cout<<v[n-2].second+1<<endl;
	
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
