  #include<bits/stdc++.h>

using namespace std;
using ll =  long long;
const ll mod=1e9+7;
const int MAXN=1<<18;

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;cin>>n;
	int a[n+1][n+1];
	for(int i=0;i<n;++i)
		for(int j=0;j<=i;++j)
			cin>>a[i+1][j+1];
	int ans=a[1][1];
	for(int i=2;i<=n;++i)
		ans=a[max(ans,i)][min(ans,i)];
	cout<<ans<<endl;
	
	
	
    return 0;
}