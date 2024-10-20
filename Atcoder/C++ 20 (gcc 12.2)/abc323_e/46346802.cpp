#include <bits/stdc++.h>
//#pragma comment(linker, "/STACK:20000000")
using namespace std;
typedef long long int ll;

ll dp[10001];
int a[1001];
ll mod=998244353;
 long long power(long long x, long long y, long long m = mod) {
    ll res=1 ;
    x = x % m;
    while(y)
    {
        if(y&1) res=(res * x) % m;
 
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}

ll trouve(int x,int n,ll q){
	
	if(dp[x]!=-1)
		return dp[x];
	ll ans=0;
	int i=0;
	while(i<n && a[i]<=x){
		ans+=trouve(x-a[i],n,q);
		ans%=mod;
		++i;
	}
	ans*=q;
	return dp[x]=ans;
}


int main(){
		//freopen("two_apples_a_day_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,x;cin>>n>>x;
	for(int i=0;i<10001;++i)
		dp[i]=-1;
	dp[0]=1;
	for(int i=0;i<n;++i)
		cin>>a[i];
	
	ll l=max(0,x-a[0]+1),r=x,ans=0,q;
	sort(a,a+n);
	q=power(n, mod - 2, mod);
	for(int i=l;i<=r;++i){
		ans+=trouve(i,n,q);
		ans%=mod;
	}
	ans*=q;
	cout<<(ans)%mod<<endl;
}