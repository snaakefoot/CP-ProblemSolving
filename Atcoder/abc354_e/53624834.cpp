#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;


void solve() {
		int n,x,y;cin>>n;
		vector<pair<int,int> > v;
		vector<int> ans;
		map<pair<int,int>,int> m;
		for(int i=0;i<n;++i){
			cin>>x>>y;
			v.push_back(make_pair(x,y));
			m[make_pair(x,y)]=i;
		}
		sort(v.begin(),v.end());
		int i=n-1,j;
		while(i>=0){
			ans.push_back(m[v[i]]+1);
			x=v[i].second;
			j=i-1;
			while(j>=0 && v[j].second>x){
				--j;
			}
			i=j;
		}
		sort(ans.begin(),ans.end());
		cout<<ans.size()<<endl;
		for(int u:ans)
			cout<<u<<' ';
		cout<<endl;

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