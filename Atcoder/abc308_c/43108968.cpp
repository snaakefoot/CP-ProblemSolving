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
	int n;
	long double x,a,b;
	cin>>n;
	vector<pair<long double,int> > v;
	for(int i=0;i<n;++i){
		cin>>a>>b;
		v.push_back(make_pair(a/(a+b),-1*(i+1)));
	}
	sort(v.begin(),v.end());
	for(int i=n-1;i>=0;--i){
		cout<<-1*(v[i].second)<<' ';
	}
	cout<<endl;
	
	
	return 0;	
}