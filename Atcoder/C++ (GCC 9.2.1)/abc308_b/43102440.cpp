#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:2000000")
 
typedef long long int  ll;
 
using namespace std;
const size_t MAXN=1<<18;
const int N=1e6;
int  mod=1e9+7;
ll dp[MAXN];



int main(void){
	ios::sync_with_stdio(false);  cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,m,p0,p;cin>>n>>m;
	vector<string> v;
	vector<string> v1;
	string ch;
	map<string ,int > ma;
	for(int i=0;i<n;++i){
		cin>>ch;
		v.push_back(ch);
		ma[ch]=0;
	}
	for(int i=0;i<m;++i){
		cin>>ch;
		v1.push_back(ch);
	}
	cin>>p0;
	for(int i=0;i<m;++i){
		cin>>p;
		ma[v1[i]]=p;
	}
	int ans=0;
	for(int i=0;i<n;++i){
		if(ma[v[i]])
			ans+=ma[v[i]];
		else
			ans+=p0;
			
	}
	cout<<ans<<endl;
	
	
	return 0;	
}