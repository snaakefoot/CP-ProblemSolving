  #include<bits/stdc++.h>

using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;

bool sortbymax(const pair<int,int> &a,
            const pair<int,int> &b)
{
    if( (max(a.second,a.first) != max(b.second,b.first)))
		return (max(a.second,a.first) < max(b.second,b.first));
	else
		return (min(a.second,a.first) < min(b.second,b.first));
}
void solve() {
	int n,x,y;cin>>n;
	vector<pair<int,int> > v;
	for(int i=0;i<n;++i){
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),sortbymax);
	for(auto p:v)
		cout<<p.first<<' '<<p.second<<' ';
	cout<<endl;
	
	
}
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int t;cin>>t;

	while(t--){
		solve();
	}
	
    return 0;
}