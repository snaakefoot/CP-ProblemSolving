#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:2000000")
 
typedef long long int  ll;
 
using namespace std;
const size_t MAXN=1<<18;
const int N=1e6;
ll  mod=1e9+7;

int main(void){
	ios::sync_with_stdio(false);  cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t=1;
	while(t--){
		int n,q,p,mn=mod;cin>>n>>p>>q;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
			mn=min(mn,a[i]);
		}
		cout<<min(q+mn,p)<<endl;
	}
	
	return 0;	
}