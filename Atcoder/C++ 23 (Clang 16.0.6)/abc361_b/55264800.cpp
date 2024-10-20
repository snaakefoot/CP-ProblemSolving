#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=5*1e5+1;


void solve() {
		int a,b,c,d,e,f,g,h,i,j,k,l;cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
		
		bool test=false;
		if(max(a,g)<min(d,j) && max(b,h)<min(e,k) && max(c,i)<min(f,l) )
			test=true;
		if(test){
		
			cout<<"Yes"<<endl;
		}
		else
			cout<<"No"<<endl;
		
 
}
 
 
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
 
	FAST;
	int t;t=1;
	while(t--){
		solve();
		
	}
	
    return 0;
}