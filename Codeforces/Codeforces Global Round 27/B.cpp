  #include<bits/stdc++.h>
 
using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=2*1e5+1;
 
void solve() {
	int n;cin>>n;
	if(n==1 || n==3){
		cout<<-1<<endl;
		return;
	}
	if(n%2==0){
		
		for(int i=0;i<n-2;++i)
			cout<<3;
		cout<<66<<endl;;
		
	}
	else{
		for(int i=0;i<n-5;++i)
			cout<<3;
		
		cout<<36366<<endl;
	}
	
	
	
	
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