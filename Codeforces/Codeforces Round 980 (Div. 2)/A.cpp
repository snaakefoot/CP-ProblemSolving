  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
	int a,b;cin>>a>>b;
	cout<<max(a-max(0,b-a),0)<<endl;
	
	
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