#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;


void solve() {
		int n;cin>>n;
		ll l[n];
		ll r[n];
		ll ls=0,rs=0;
		for(int i=0;i<n;++i){
			cin>>l[i]>>r[i];
			ls+=l[i];
			rs+=r[i];
		}
		if(ls<=0 && rs>=0){
			cout<<"Yes"<<endl;
			for(int i=0;i<n;++i){
				cout<<min(r[i],l[i]-ls)<<' ';
				ls+=min(r[i]-l[i],-1*ls);
			}
		}
		else
			cout<<"No"<<endl;
		
		
		
		
 
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