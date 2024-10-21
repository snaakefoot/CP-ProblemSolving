#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;


void solve() {
		int n,k,x;cin>>n>>k>>x;
		bool test=true;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i){
			cout<<a[i]<<' ';
			if(i==k-1)
				cout<<x<<' ';
		}
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