#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;


bool dp[MAXN];
bool done[MAXN];
map<int,vector<int> > adj;
int n;

bool trouve(int mask){
	if(done[mask])
		return dp[mask];
	done[mask]=true;
	bool ans=false;
	for(int i=0;i<n;++i){
		for(int u:adj[i]){
			if(!((1<<i)&mask) && !((1<<u)&mask)){
				
				ans=ans || (!(trouve(mask |((1<<i)) |((1<<u))) ));
			}
		}
	}
	return dp[mask]=ans;
	
}
void solve() {
		int a,b;cin>>n;
		vector<pair<int,int> > v;
		for(int i=0;i<n;++i){
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
					if(i==j)continue;
					if(v[i].first==v[j].first || v[i].second==v[j].second)
						adj[i].push_back(j);
				}
			
		}
		if(trouve(0))
			cout<<"Takahashi"<<endl;
		else
			cout<<"Aoki"<<endl;
		

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