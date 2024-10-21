#include<bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=7*1e4;


void solve() {
		int a,b,c;cin>>a>>b>>c;
		map<string,int> m;
		m["Red"]=a;
		m["Green"]=b;
		m["Blue"]=c;
		string ch;cin>>ch;
		m[ch]=2000;
		cout<<min(min(m["Red"],m["Green"]),m["Blue"])<<endl;
		
		
		
		
 
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