#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll = long long;
const ll mod=1e9+7;

		
void solve() {
		int n,x,y,z;
		cin>>n>>x>>y>>z;
		bool test;
		if(x<=y){
			test=((z>=x)&&(z<=y));
		}
		else{
			test=((z>=y)&&(z<=x));
		}
		if(test)
			cout<<"Yes"<<endl;
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