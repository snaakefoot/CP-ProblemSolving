#include<bits/stdc++.h>

using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
void solve() {
	
	int n,u;cin>>n;
	if(n%400==0)
		cout<<366<<endl;
	else
		if(n%100==0)
			cout<<365<<endl;
		else
			if(n%4==0)
						cout<<366<<endl;
	else
				cout<<365<<endl;
	
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